#include <Wire.h>
#include <Servo.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

Servo servoX;
Servo servoY;

// Servo pins
const int servoXPin = 9;
const int servoYPin = 10;

// Current servo positions
int servoXAngle = 90;
int servoYAngle = 90;

// Calibration values
float offsetX = 0;
float offsetY = 0;

void setup()
{
  Serial.begin(115200);

  servoX.attach(servoXPin);
  servoY.attach(servoYPin);

  servoX.write(90);
  servoY.write(90);

  if (!mpu.begin())
  {
    Serial.println("MPU6050 NOT FOUND");
    while (1);
  }

  Serial.println("Keep MPU6050 Flat...");
  delay(3000);

  sensors_event_t a, g, temp;

  float sumX = 0;
  float sumY = 0;

  for (int i = 0; i < 200; i++)
  {
    mpu.getEvent(&a, &g, &temp);

    sumX += a.acceleration.x;
    sumY += a.acceleration.y;

    delay(5);
  }

  offsetX = sumX / 200.0;
  offsetY = sumY / 200.0;

  Serial.println("Calibration Complete");
}

void loop()
{
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  float x = a.acceleration.x - offsetX;
  float y = a.acceleration.y - offsetY;

  servoXAngle = map(x * 10, -100, 100, 0, 180);
  servoYAngle = map(y * 10, -100, 100, 180, 0);

  servoXAngle = constrain(servoXAngle, 0, 180);
  servoYAngle = constrain(servoYAngle, 0, 180);

  servoX.write(servoXAngle);
  servoY.write(servoYAngle);

  Serial.print("X:");
  Serial.print(servoXAngle);

  Serial.print("   Y:");
  Serial.println(servoYAngle);

  delay(20);
}
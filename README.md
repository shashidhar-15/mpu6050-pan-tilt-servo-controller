\# Gesture Controlled Pan-Tilt System using Arduino Uno, MPU6050 IMU and MG995 Servos



> An Arduino-based gesture-controlled pan-tilt system that uses an MPU6050 IMU and a complementary filter to convert hand movements into smooth dual-axis servo motion.







\##  Overview



This project demonstrates a gesture-controlled pan-tilt mechanism using an Arduino Uno, an MPU6050 Inertial Measurement Unit (IMU), and two MG995 servo motors.



The MPU6050 continuously measures the board's orientation using its built-in accelerometer and gyroscope. A complementary filter combines both sensor readings to produce stable and smooth pitch and roll angles. These filtered angles are then mapped to two servo motors, enabling intuitive pan and tilt control through physical movement of the sensor.



The project demonstrates practical concepts used in robotics, camera stabilization, motion control systems, and embedded applications.







\##  Features



\- Gesture-controlled pan and tilt mechanism

\- Real-time orientation tracking using MPU6050

\- Complementary filter for smooth and stable motion

\- Automatic gyroscope calibration during startup

\- Smooth servo interpolation to reduce jitter

\- Adjustable sensitivity for servo movement

\- Real-time Serial Monitor output for debugging

\- Built using Arduino Uno and Embedded C++







\##  Hardware Used



\- Arduino Uno

\- MPU6050 IMU

\- 2 × MG995 Servo Motors

\- Breadboard

\- Jumper Wires







\##  Software \& Libraries



\### Software

\- Arduino IDE



\### Libraries

\- Adafruit MPU6050

\- Adafruit Unified Sensor

\- Adafruit BusIO

\- Servo (Built into Arduino IDE)







\##  Connections



\### MPU6050



|   MPU6050   |   Arduino Uno   |

|-------------|-----------------|

|    VCC      |        5V       |

|    GND      |        GND      |

|    SDA      |        A4       |

|    SCL      |        A5       |



\### Servo Motors



|       Servo       | Arduino Uno |

|-------------------|-------------|

| Pan Servo Signal  |      D9 	  |

| Tilt Servo Signal |      D10	  |

|         VCC       | 	   5V     |

|         GND       |      GND	  |







\##  Important Note



For this prototype, both MG995 servo motors were powered directly from the Arduino Uno. This configuration was sufficient for demonstration purposes.



For practical applications or continuous operation, using a regulated external 5V power supply is recommended to provide stable current to the servo motors.







\##  Working Principle



1\. MPU6050 measures acceleration and angular velocity.

2\. Accelerometer estimates the absolute tilt angle.

3\. Gyroscope measures rotational speed.

4\. A complementary filter combines both measurements to reduce drift and sensor noise.

5\. Calculated pitch controls the tilt servo.

6\. Calculated roll controls the pan servo.

7\. Servo interpolation ensures smooth movement instead of sudden jumps.







\##  Project Images



\### Hardware Setup



<img src="images/setup.jpg" width="700">



<img src="images/wiring.jpg" width="700">



\##  Demonstration



A working demonstration video is included in this repository.



&#x20;Location:



video/demo.mp4





\##  Repository Structure





gesture-controlled-pan-tilt-system

│

├── README.md

├── LICENSE

│

├── code

│   └── MPU6050\_PanTilt\_Controller.ino

│

├── images

│   └── setup.jpg

│	 └── wiring.jpg

└── videos

&#x20;   └── demo.mp4









\##  Future Improvements



\- Ultrasonic radar scanning

\- ESP32 wireless control

\- Bluetooth mobile controller

\- Camera stabilization platform

\- Object tracking using OpenCV

\- OLED status display

\- PID-based stabilization

\- Web dashboard for remote control







\##  Learning Outcomes



This project helped me gain practical experience with:



\- IMU sensor interfacing

\- I2C communication

\- Complementary filtering

\- Servo motor control

\- Motion smoothing techniques

\- Embedded C++ programming

\- Arduino development

\- Sensor calibration







\##  Contributing



Contributions, suggestions, and improvements are always welcome.



Feel free to fork this repository and create a pull request.







\##  License



This project is licensed under the MIT License.







\##  If you found this project useful, consider giving it a Star.


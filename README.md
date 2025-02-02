# Nano33BLE-Gyroscope-Tilt-Detector
This project focuses on the Arduino Nano 33 BLE Sense Rev2's 3-axis gyroscope sensor of the IMU system. The goal is to measures the tilt direction of the board. The Arduino IDE Serial Monitor will be used to print the return results after using the gyroscope's axis values to accomplish this.

The gyroscope is a component of the IMU sensor. The Arduino Nano 33 BLE Sense Rev2 features the BMI270 and BMM150 as its onboard IMU sensors. 
IMU stands for "Inertial Measurement Unit." It is an electronic sensor that utilizes accelerometers, gyroscopes, and magnetometers to measure a body's specific force, angular rate, and orientation.
The IMU system on the Arduino Nano 33 BLE Sense Rev2 consists of two modules: a 6-axis BMI270 and a 3-axis BMM150. Together, they create a 9-axis IMU system capable of measuring acceleration, rotation, and magnetic fields in three-dimensional space.
![nano33BS_03_IMU](https://github.com/user-attachments/assets/40381f9b-159b-4c04-90c8-fc55f9328b12)

The Arduino BMI270_BMM150 library allows for easy integration of Arduino Nano Sense Rev2 IMU modules without the need for complex programming. If you haven't installed the library yet, you can do so using the Library Manager in the Arduino IDE. Just type "Arduino BMI270_BMM150" in the search bar and then install it.

A gyroscope sensor is a device that can measure and maintain the orientation and angular velocity of an object. Gyroscopes can measure the tilt and lateral orientation of an object. This sensor is also called an "Angular Rate Sensor" or "Angular Velocity Sensor", measured in degrees per second, which refers to the rate of change in the rotational angle of an object over time.
![nano33BS_03_gyroscope](https://github.com/user-attachments/assets/24d0ab30-9712-4c3e-a0ae-503b6ac2d05c)


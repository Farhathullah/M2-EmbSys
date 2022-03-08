# Smart Paroxysm Prediction and Life Saver System
# Requirements
# Abstract
The major aim of the project is predict the epilepsy in few minutes advanced and alert them. Epilepsy is major problem to youngsters. This project solved the problem and measures the variation of the human body signals such as heart rate and movement of the body. For people who have been are suffering from epileptic seizures, a real time system is developed which is helpful in detecting such cases, is Smart epilepsy detection and alert system is an advanced technology by which developed is a electronic gadget. The electronic system presented here is a wearable device which predicts the occurrence of epilepsy in a few minutes advance. Using that kit we can save the life of the person who is really effecting with the condition. It will do the help in both the ways means not only checks the condition but also sends an SMS to the concerned doctor for the patient’s live saving sake. The device utilizes the heartbeat rate from human body to detect the occurrence of epilepsy. As soon as the device detects the symptoms, it transmits a message as both by buzzer alarm and the message to the guardian and nearby hospital.To implement all the above process, mainly four modules ARDUINO module, GSM module to send an SMS, GPS module to find the location and buzzer module to initimate the person.When the heartbeat sensor detects the heartrate to be varied and/or also the accelerometer sensor gives the movement of the body are changed to intimate the person will be attack by epilepsy using alarm then send the message to doctor or any relatives and GPS is used to track the exact location of the patients . 
# Introduction
Epilepsy is a paroxysmal attack, neurological disorder marked by sudden recurrent episodes of sensory disturbance, loss of consciousness, or convulsions, associated with abnormal electrical activity in the brain. Abnormal sensations, such as numbness, sensations like ants crawling on the skin, abdominal pain, sweating, increase in heart rate/pulse, changes in mood or emotion and  temporary inability to speak. Epilepsy is the fourth most common neurological problem and it is most commonly diagnosed in children and in people over 65. People suffering from epilepsy are referred to as PWE or Persons with Epilepsy.  Approximately 50 million people are affected by epilepsy globally and 80% of the peoplelive in low and middle income countries. Even after taking medication for a long duration to prevent epilepsy, 20% of people with epilepsy will develop seizures that are resistance to drugs.

In India, there are about 5 million people affected with epilepsy. The overall prevalence of epilepsy in India is 5.59-10 per 1000. More number of males getting affected by epilepsy was reported in a study conducted in India which prevalence in males (5.1 per 1000) was signiﬁcantly higher than that in females (2.2 per 100). The first epilepsy surgery in India was performed on 25 August 1952 at Christian Medical College (CMC) in Vellore. India spends approximately 68.75 billion (1.72 billion USD) for epilepsy treatment every year. While 60% of people in urban India consult a doctor after suffering a seizure, only 10% in rural India would do so.  Nearly 95% of the people with active epilepsy do not receive appropriate treatment for their condition, leading to large treatment gap.


Epileptic seizures are classified in to three groups, Generalized Onset seizures(Absence seizure, Tonic-conic seizures), Focal Onset seizures (simple focal seizures, complex focal seizure) and Unknown Onset seizures. Partial seizures arise from a discrete focus, such as a cortical malformation ortumor, without loss of consciousness. Primary Generalized seizures appear to originate from abnormal oscillations in thalamocortical loops.
# Swot Analysis
# Strengths
Compact

Portable

Light weight

Highly efficient

Cost effective

Less maintenance required

Risk free and easy touse
# Weakness
Any sudden movement can be registered as a seizure event.

Current design can do not measure repetitivemovements of the body at all time.
## High Level Requirements
| **<h3> ID** | **<h3>Description**                                              | <h3>Status      |    
|-------------|--------------------------------------------------------------|------------- |
 | Patient Activities|-It includes patient records,patient information  | Implemented    |
| Adminstration     |It includes room informtion,general adminstration| Implemented    |
|  Payment Details       |It includes patient payment details,pay recipts etc| future    |
##  Low level Requirements
 | **<h3> ID** | **<h3>Description**                                              | <h3>Status      |    
|-------------|--------------------------------------------------------------|------------- |
 | security|It should secure because  only authorized user or receptionist can this system  | Implemented    |
| platform     |The system can be work on any operating system like windows or linus| Implemented    |
|  Performanace       |The system should handles the large amount patients data| Implemented    |

# Block diagram
![block diagram](https://user-images.githubusercontent.com/99136276/155833303-5c7c68c0-afa8-4096-ac6c-6c911f5504fb.png)
# Technical specification:Arduino
Microcontroller: MicrochipATmega328P
Operating Voltage: 5Volts

Input Voltage: 7 to 20Volts

Digital I/O Pins: 14 (of which 6 can provide PWMoutput)

UART: 1

I2C:1

SPPI:1

Analog Input Pins:6

DC Current per I/O Pin: 20mA

DC Current for 3.3V Pin: 50mA

Flash Memory: 32 KB of which 0.5 KB used bybootloader

SRAM: 2KB

EEPROM: 1KB

Clock Speed: 16MHz

Length: 68.6mm

Width: 53.4mm

Weight: 25g
# Heartbeat Sensor
  Heartbeat sensor is to measure the Heart Rate or pulse rate of a person. The sensor measures the heart rate through the fingertip. It is designed to give digital output of heat beat when a finger is inserted. This Heart Beat Sensor provides an easy way to integrate heart rate measurement. The heartbeat is measured in beats per minute or bpm, which indicates the number of times the heart is contracting or expanding in a minute.
  The circuit design of Arduino based Heart rate monitor system using Heart beat Sensor is very simple. In order to display the heartbeat readings in bpm, a 16×2 LCD Display is connected to the Arduino UNO.The 4 data pins of the LCD Module (D4, D5, D6 and D7) are connected to Pins 1, 1, 1 and 1 of the Arduino UNO. Also, a 10KΩ Potentiometer is connected to Pin 3 of LCD (contrast adjust pin). The RS and E (Pins 3 and 5) of the LCD are connected to Pins 1 and 1 of the Arduino UNO.The output of the Heartbeat Sensor Module is connected to the Analog Input Pin (Pin 1) of Arduino.The code is uploaded to Arduino UNO and power on the system.Place any finger (except the Thumb) in the sensor clip and push the switch (button). Based on the data from the sensor, Arduino calculates the heart rate and displays the heartbeat in bpm. The result is displayed on the LCD screen.
# Accelerometer sensor
The ADXL335 accelerometer sensor  is a small, low power, complete 3-axis accelerometer with signal conditioned voltage outputs. It can measure the static acceleration of gravity in tilt-sensing applications, as well as dynamic acceleration resulting from motion, shock, or vibration.This ADXL335 Accelerometer module consists of an ADXL335 Accelerometer IC, Voltage Regulator IC, resistors, and capacitors in an integrated circuit. The product measures acceleration with a minimum full-scale range of ±3 g. With this the person’s position can be measured.  

# Alarm buzzer
A buzzer or beeper is an audio signalling device, which may be mechanical, electromechanical, or piezoelectric. The input supply is given 5 VDC and the consumption of current is 9.0 mA max. The oscillating frequency is 3.0 ±0.5 KHz. The Sound Pressure Level is 85dB min. In the scenario, if a patient’s heartbeat rate and position of the body is varied at a time. The patient can be alerted by sound in a very loud alarm on the wearable. To achieve this, a piezoelectric buzzer is used, which is responsible for emitting a strong tone upon the output being set to HIGH. The buzzer module is activated by dumping the coding. Also, this buzzer works similar to the SOS led by alerting the people nearby with the distressed tone that the patient might be get help and is in need of assistance. The buzzer is connected to the digital pin of the Arduino.
# GPS sensor
The NEO6M GPS Module has a big 25mmx25mm antenna along with a battery and EEPROM to lock the satellites faster. The module has a GPS Antenna connected via an uFl connector. It doesn’t have any power indicator LED, but it has an onboard LED that indicates the satellite is fixed. Whenever the LED blinks the satellite is fixed and sending the data via the Serial Communication pins. It continuously sends the data via the serial pins. The data is been got from it and parse it to get our required information using the Microcontroller/Microprocessor. The default baud rate for NEO6M GPS Module is 9600bps. For determining the real time location of the epilepsy patient NEO6MV2 GPS module has been used which communicates with the Arduino Uno through a 9600 bps software serial interface. The connections between the Arduino Uno and the GPS module established like the connections with GSM module. It has a low power consumption and smallsize, which is very compact. The GPS module output comprises of standard string information which is governed by the National Marine Electronics Association (NMEA) protocol.
# GSM sensor
The SIM800L module supports quad-band GSM/GPRS network, available for GPRS and SMS message data remote transmission. The SIM800L communicates with microcontroller via UART port, supports command including 3GPP TS 27.007, 27.005 and SIMCOM enhanced AT Commands. It also has built-in level translation, so it can work with microcontroller of higher voltage than 2.8V default. Besides, the board also supports A-GPS technique which is called mobile positioning and gets position by mobile network. This features make it can also be a tracker module. Using this GSM module in the kit to send an SMS to the guardian and the doctor who will take care of the patient in the hospitals. GSM module code we have dumped in the 8051 micro controller using the KEIL software.
If the power to the SIM800L is enough, the onboard LED starts blinking according to its operation. If the power is not enough it will receive poor signal and search for network all the time (if still searching adjust the trimpot slightly but do not exceed much than 4.7v). The frequency of the blinking denotes the following:
Every second: searching for a network.
Every three seconds: connected to a network.
Twice per second: connected through GPRS.
Before making connections, the output is set to 4.4V by adjusting the potentiometer on the power supply module. As we know the SIM800L accepts 3.6V – 4.4V and 2Amps, the SIM800L module can draw much current as needed from the power supply with a fixed voltage. The RX Pin of SIM800L Module connects to TX Pin of the Arduino. Similarly, the TX Pin of SIM800L connects to RX Pin of Arduino. In simple logic, a receiver can receive some data only if it is transmitted from somewhere. Similarly for the transmitter side, when some data is sent, the other should receive it to make use of it.
# Power
Power Supply Unit (PSU) is a vital part in any electronic product design. The product requires a Power Supply circuit that could convert the AC mains supply to 5V DC to operate them. A similar AC to DC power supply circuit is build with 10W power rating. The circuit will convert the 220V AC mains to 5V and provide a maximum output current upto 2A. This power rating should be enough to power the arduino. A step-down transformer is used to convert the high voltage AC to the low voltage AC. The transformer is PCB mounted and it is a 1-ampere 13-volt transformer. However, during the load, the transformer voltage drops approximately 12.5-12.7 volt. 
Thus, the AC voltage will be 85-265VAC with 50Hz rating. The output voltage is selected as 5V with 2A of the current rating.To deal with EMI issues, a common mode filter will be used for blanking out the generated EMI.  On the Output side we will include short circuit protection, over-voltage protection, and over-current protection. For the Input surge and SMPS fault protection two components, F1 and RV1 is used. For AC-DC conversion, full bridge rectifier DB107 is used. For PI filter, Different states have different EMI rejection standard. This design has EN61000-Class 3 standard and the PI filter is designed in such a way to reduce the common-mode EMI rejection. The switching circuit has two components, U1, and the C3. U1 is the main driver IC TNY268PN. The C3 is the bypass capacitor which is needed for the working of our driver IC. Under-voltage lockout protection is done by the sense resistor R1 and R2. It is used when the SMPS goes into the auto-restart mode and sense the line voltage. Two 1M resistors are used in the series.D1 and D2 are the clamp circuit. D1 is the TVS diode and D2 is an ultra-fast recovery diode. The transformer acts a huge inductor across the power driver IC TNY268PN. Therefore during the switching off-cycle, the transformer creates high voltage spikes due to the leakage inductance of the transformer. These high-frequency voltage spikes are suppressed by the diode clamp across the transformer. UF4007 is selected due to the ultra-fast recovery and P6KE200A is selected for the TVS operation. As per the design, the targeted clamping voltage (VCLAMP) is 200V. Therefore, P6KE200A is selected and for ultra-fast blocking related issues, UF4007 is selected as D2.
           The output from the transformer is rectified and converted to DC using D6, a Schottky rectifier diode. The snubber circuit across the D6 provides suppression of the voltage transient during switching operations. The snubber circuit consist one resistor and one capacitor, R3, and C5. The filter section consists of a filter capacitor C6. It is a Low ESR capacitor for better ripple rejection. Also, an LC filter using L2 and C7 provide better ripple rejection across the output.
     The output voltage is sensed by the U3 TL431 and R6 and R7. After sensing the line, U2, the optocoupler is controlled and galvanically isolating the secondary feedback sensing portion with the primary side controller. Thus the power supply to the arduino is done.
# LCD screen
This is a basic 16 character by 2 line Alphanumeric display. Black text on Green background.Utilizes the extremely common HD44780 parallel interface chipset.Interface code is freely available. It need Minimum 6 general I/O pins to interface. It Includes LED backlight. Works in 4bit and 8 bit Mode.The LCD Screen is connected to the arduino board.The LCD screen will display the patient’s heartbeat and also the position of the body.
# Software used
# Arduino IDE
Arduino is an open-source electronics platform based on easy-to-use hardware and software. It's intended for anyone making interactive projects. The Arduino Integrated Development Environment (IDE) is a cross-platform application (for Windows, macOS, Linux) that is written in functions from C and C++. It is used to write and upload programs to Arduino compatible boards, but also, with the help of 3rd party cores, other vendor development boards. The source code for the IDE is released under the GNU General Public License, version 2

# Circuit diagram
![image](https://user-images.githubusercontent.com/99136276/155834909-4746dec7-58ac-4e93-b0f3-7a69533395cf.png)
 
 
## Test Plan

## High Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P |	Actual Output | status |
| --- | --- | --- | --- | --- | --- |
| H_01 | Adding new patients details  | id,name | Record ipdated sucessfully | Record ipdated sucessfully | pass |
| H_02 | Delete existed  patient  record | id=? | id found | id found | pass | 
| H_03 | checking list records present in system| view records | list of records | list of records | pass |
| H_04 | Search for particular patient record in system  | enter patient id | Record found | Record found | pass |
| H_05 | checking rooms availability | Room no | Room available | Room availble | 
| H_06 | Login into the system | Password | Accepted |Accepted| pass |
| H_07 | Exit from the system | Exit | Exited | Exited | pass |


## Low Level Test Plan



| Test ID | Description | Exp I/P | Exp O/P |	Actual Output | status |
| --- | --- | --- | --- | --- | --- |
| L_01 | Delete patient record not existed  | id | id not found | id not found | pass |
| L_02 | Login into the system | Password | Denied | Denied | pass | 
| L_03 | checking rooms availability| Room no | Room not available | Room not available | pass |



  
 






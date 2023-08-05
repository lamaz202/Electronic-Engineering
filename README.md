# Electronic-Engineering 
task 1
https://www.tinkercad.com/things/agV3jF2jsq0?sharecode=W7TUymQpBUK26bYudtvIdiMs7VqXAfYGWO69TWhRwrc
Task 1: LED Matrix
This Arduino project and simulation display a 5x5 eye shape pattern on an LED matrix. Follow these simple steps to set it up:
1. Create a Tinkercad account if you don't have one.
2. Open Tinkercad and create a new Arduino circuit.
3. Add an Arduino board and a 5x5 LED matrix display to the circuit.
4. Connect the LED matrix's row pins (ROW_1 to ROW_5) to pins 7 to 3 on the Arduino.
5. Connect the LED matrix's column pins (COL_1 to COL_5) to analog pins A4 to A0 on the Arduino.
6. Open the Arduino code editor in Tinkercad.
7. Copy and paste the code from the provided "led_matrix.ino" file into the editor.
8. Click the "Start Simulation" button to run the simulation.
Usage:
1. The Tinkercad simulation will show a 5x5 eye shape pattern on the LED matrix.
2. The eye pattern is defined in the code's "eyePattern" array, representing the LED states (ON/OFF) in the matrix.
3. The code iterates through each row of the matrix and activates the corresponding row pins (ROW_1 to ROW_5).
4. For each row, the code sets the column pins (COL_1 to COL_5) based on the pattern defined in the "eyePattern" array.
5. The eye pattern will be displayed on the LED matrix in the simulation.

Electric Circuit:
This Arduino project and simulation control an LED based on a button's state. The LED turns on when the button is pressed and off when released. Follow these simple steps to set it up:
1. Create a Tinkercad account if you don't have one.
2. Open Tinkercad and create a new Arduino circuit.
3. Add an Arduino board, an LED, a push button, and any necessary resistors to the circuit.
4. Connect the LED's anode (longer leg) to pin 7 on the Arduino.
5. Connect the LED's cathode (shorter leg) to GND (ground) on the Arduino.
6. Connect one leg of the push button to pin 4 on the Arduino.
7. Connect the other leg of the push button to GND (ground) on the Arduino.
8. If required, add resistors in series to limit current flow through the LED and button.
9. Open the Arduino code editor in Tinkercad.
10. Copy and paste the code from the provided "button_led.ino" file into the editor.
11. Click the "Start Simulation" button to run the simulation.


task 2
https://www.tinkercad.com/things/1fiE6ZhvwoW?sharecode=JKbuMNybgyTwcXYteGV_oxkwC2vuWKxNqUc0qKWdRGg

Servo Motor:

1. Create a new Arduino circuit in Tinkercad.
2. Drag and drop the required components onto the circuit workspace:
	* Arduino board
	* Servo motor
	* Connect the signal wire (usually orange or yellow) of the servo motor to pin 9 on the Arduino.
	* Connect the power wire (usually red) of the servo motor to the 5V pin on the Arduino.
	* Connect the ground wire (usually brown or black) of the servo motor to the GND (ground) pin on the Arduino.
3. Open the Arduino code editor in Tinkercad.
4. Copy and paste the code from the servo_control.ino file into the Arduino code editor.
5. Click on the "Start Simulation" button to run the simulation.

DC Motor:

1. Create a new Arduino circuit in Tinkercad.
2. Drag and drop the required components onto the circuit workspace:
	* Arduino board
	* DC motor
	* H-bridge module (L298N or similar)
3. Connect the components as follows:
	* Connect the enable pins (vA and vB) of the H-bridge module to PWM pins on the Arduino (e.g., vA to pin 3 and vB to pin 11).
	* Connect the input pins (i1, i2, i3, i4) of the H-bridge module to digital pins on the Arduino (e.g., i1 to pin 4, i2 to pin 5, i3 to pin 9, and i4 to pin 10).
	* Connect the power supply and ground pins of the H-bridge module to the appropriate power and ground connections on the Arduino.
	* Connect the DC motor to the output pins of the H-bridge module.
4. Open the Arduino code editor in Tinkercad.
5. Copy and paste the code from the dc_motor_control.ino file into the Arduino code editor.
6. Click on the "Start Simulation" button to run the simulation.



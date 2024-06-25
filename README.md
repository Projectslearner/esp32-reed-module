# ESP32 Reed Switch Module Project

### Project Overview
The ESP32 Reed Switch Module project demonstrates how to use a reed switch to detect the presence of a magnetic field with an ESP32 microcontroller. This project is useful for applications such as door/window sensors, magnetic proximity sensors, and various types of security systems.

### Components Needed
- **ESP32 Microcontroller**: The main controller that processes the reed switch signals.
- **Reed Switch**: A magnetic switch that opens or closes in the presence of a magnetic field.
- **Magnet**: To trigger the reed switch.
- **LED**: For visual indication of the reed switch status.
- **Jumper Wires**: Connect the components to the ESP32.
- **Breadboard**: Optional, for organizing the circuit connections.

### Block Diagram

### Circuit Setup
1. **Connecting the Reed Switch to ESP32:**
   - **Reed Switch (reedPin)**: Connect one end of the reed switch to GPIO 23 on the ESP32 and the other end to GND.
   - **LED (ledPin)**: Connect the positive leg (anode) of the LED to GPIO 2 and the negative leg (cathode) to GND through a suitable resistor (e.g., 220Ω).

### Instructions
1. **Setup:**
   - Initialize serial communication for debugging purposes using `Serial.begin(9600)`.
   - Configure the reed switch pin (`reedPin`) as an input with an internal pull-up resistor using `pinMode(reedPin, INPUT_PULLUP)`.
   - Configure the LED pin (`ledPin`) as an output using `pinMode(ledPin, OUTPUT)`.

2. **Operation:**
   - **Reading Reed Switch State:**
     - Use `digitalRead(reedPin)` to read the state of the reed switch.
     - Print the state to the Serial Monitor using `Serial.print` and `Serial.println`.
   - **Indicating Magnet Presence:**
     - If the reed switch state is `LOW` (magnet is near), print "Magnet is near!" and turn on the LED using `digitalWrite(ledPin, HIGH)`.
     - If the reed switch state is `HIGH` (magnet is far), print "Magnet is far!" and turn off the LED using `digitalWrite(ledPin, LOW)`.

3. **Considerations:**
   - **Debouncing:** Implement debouncing in software or hardware to avoid false triggers due to switch bounce.
   - **Sensor Placement:** Ensure proper placement of the reed switch and magnet for reliable operation.

### Applications
- **Security Systems:** Detect the opening and closing of doors or windows.
- **Proximity Sensing:** Monitor the presence of objects in a defined area.
- **Automation:** Trigger actions based on the presence or absence of a magnet.

### Useful Links
🌐 [ProjectsLearner - ESP32 Reed Switch](https://projectslearner.com/learn/esp32-reed-switch)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner

### README for Timer Control System

---

# Timer Control System

## Overview
This project showcases a timer control system using a GUI built with Qt and an ATmega32 microcontroller. The system allows users to set a timer via a QDial widget and control LEDs and a buzzer through the graphical interface. The project demonstrates real-time control and feedback, with multithreading to ensure seamless operation.

## Features
- **Graphical User Interface (GUI):** Built with Qt, featuring a QDial to set the timer and buttons to start, stop, turn on, and turn off the LEDs.
- **LCD Number Display:** Shows the countdown timer.
- **LED Control:** Red, blue, and green LEDs that respond to user inputs.
- **Buzzer:** Activated when the timer reaches zero, buzzing for 2 seconds.
- **Serial Communication:** Uses USB to TTL converter and QSerial class for communication between the GUI and the ATmega32 microcontroller.
- **Multithreading:** Utilizes QThreadPool to run multiple threads, ensuring the timer and LEDs function simultaneously without interruption.

## Components
- Qt-based GUI application
- ATmega32 microcontroller
- USB to TTL converter
- LEDs (Red, Blue, Green)
- Buzzer
- QDial and QPushButton widgets
- QLCDNumber display

## Setup and Installation
1. **Hardware Setup:**
   - Connect the LEDs and buzzer to the ATmega32 microcontroller.
   - Connect the USB to TTL converter to the microcontroller for serial communication.
   - Ensure all components are connected and configured correctly.

2. **Software Setup:**
   - Install Qt and set up the development environment.
   - Clone this repository:
     ```bash
     git clone https://github.com/Abdulrhman-Nasser/TimerApp_Qt.git
     ```
   - Open the Qt project file in Qt Creator.
   - Configure the serial port settings in the code to match your hardware configuration.
   - Build and run the project.

## Usage
1. Launch the Qt application.
2. Use the QDial to set the desired timer value.
3. Press the "Start" button to begin the countdown.
4. The countdown value will be displayed on the QLCDNumber and the QDial will decrement accordingly.
5. Press the "Stop" button to stop the timer at any time.
6. If the timer reaches zero, the buzzer will buzz for 2 seconds, and the corresponding LED will turn on.
7. Use the "Turn On" button to turn on all LEDs, and the "Turn Off All" button to turn off all LEDs.
8. Pressing any button will turn on the corresponding LED.

## Contributing
Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.


---

Let me know if you need any further details or modifications!

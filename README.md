# Soil Moisture Monitoring System

The Soil Moisture Monitoring System is designed to measure and monitor the moisture levels in soil using a **Capacitive Soil Moisture Sensor**. The system is based on an **STM board** and provides a simple yet efficient way to monitor soil moisture for agricultural or gardening applications.

## Project Overview

The project consists of two major components:

### 1. Capacitive Soil Moisture Sensor
The capacitive soil moisture sensor measures soil moisture by detecting the capacitance change in the soil. The sensor has three pins: **Vin**, **Ground**, and **Analog Out**. The system works as follows:
- **Vin** pin is connected to a 5V supply from the STM board.
- The sensor has two plates that act as a capacitor. One plate is connected to ground, and the soil acts as the dielectric medium.
- As the moisture level in the soil increases, the dielectric constant of the soil changes, which alters the capacitance.
- The **Analog Out** pin gives a voltage reading that changes with the moisture level. This value is read by the STM board.
- Based on trial and error, the threshold values are set to determine moisture levels: **Low**, **Medium**, and **High**.

### 2. STM Board
The system uses an STM board, which is ideal for such individual sensor operations. The STM board is:
- **Economical** and easy to use.
- Compatible with the Arduino IDE (embedded C platform), making it simple to write code and control the sensor.
  
### 3. System Output
The system provides an output based on the soil moisture level:
- **LED Indicators**: LEDs are used to indicate whether the soil moisture level is **Low**, **Medium**, or **High**.
- **Serial Monitor**: The output can be displayed on the serial monitor in the Arduino IDE for real-time feedback.

### 4. Future Extensions
In the future, the project can be extended to:
- **LCD Display**: Instead of LEDs, an LCD can be used to display real-time moisture levels directly on the system.
- **Cloud Integration**: The system can upload moisture data to the cloud for further analysis, such as tracking soil moisture over time and optimizing irrigation systems.

## Installation and Setup

### Hardware Components:
- **Capacitive Soil Moisture Sensor**
- **STM Board** (compatible with Arduino IDE)
- **LEDs** (for visual indication)
- **Jumper wires** and **Breadboard** (for connections)
- **LCD Display** (optional for extension)
  
### Circuit Connections:
1. **Capacitive Sensor**:
   - **Vin** pin of the sensor connected to **5V** on the STM board.
   - **Ground** pin connected to **GND** on the STM board.
   - **Analog Out** pin connected to an **analog input pin** on the STM board (e.g., A0).

2. **LEDs**:
   - Connect the LEDs to the STM board pins (e.g., Pin 13 for low, Pin 12 for medium, Pin 11 for high).
   - Use appropriate resistors (220Ω) to limit current to the LEDs.

3. **Serial Monitor**:
   - Output results can be viewed on the **Serial Monitor** in the Arduino IDE.

### Software Setup:
1. Install the **Arduino IDE** (if not already installed).
2. Set up the STM board in the Arduino IDE:
   - Go to **Tools** → **Board** → Select your STM board model.
   - Install the necessary drivers for the STM board if required.
   
3. Clone the repository or download the project code.
   ```bash
   git clone https://github.com/yourusername/soil-moisture-monitoring.git

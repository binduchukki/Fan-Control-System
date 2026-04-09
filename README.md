# 🌬️ Temperature-Based Fan Control System using Arduino

## 📌 Description
This project is a **Temperature-Based Fan Control System** using Arduino. It automatically controls the speed of a fan based on the surrounding temperature using a **temperature sensor (DHT11/DHT22)**.

The system adjusts the fan operation according to temperature levels, helping in **energy saving and automation**.

---

## 🔧 Features
- 🌡️ Monitors temperature in real time  
- 🌀 Automatic fan control  
- ⚡ Energy efficient system  
- 🔄 Different fan speeds based on temperature  
- 📊 Continuous monitoring  

---

## 🧰 Components Used
- Arduino Uno  
- DHT11 / DHT22 Sensor  
- DC Fan / Motor  
- Transistor (or Relay Module)  
- Power Supply  
- Resistors  
- Breadboard  
- Jumper Wires  

---

## ⚙️ Working Principle
1. Temperature sensor reads the current temperature  
2. Arduino processes the temperature value  
3. Based on temperature:
   - Below 25°C → Fan OFF  
   - 25°C to 35°C → Fan at medium speed  
   - Above 35°C → Fan at high speed  
4. Fan speed is controlled using PWM or relay  

---

## 🔌 Circuit Diagram
<img width="685" height="576" alt="image" src="https://github.com/user-attachments/assets/2e8cc5f2-e825-43db-9ecc-190d3f4d037f" />
Downloaded from https://wokwi.com/

Simulate this project on https://wokwi.com

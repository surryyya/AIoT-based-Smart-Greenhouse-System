# 🌱 AIoT-Based Smart Greenhouse System

> A real-time monitoring and automation system for greenhouse environments using ESP32 and intelligent decision logic.

---

## 💡 Why I Built This

While learning about IoT and embedded systems, I wanted to work on something that connects directly to real-world problems. Agriculture and controlled farming environments stood out, especially with the need for efficient water usage and environmental monitoring.

This project is my attempt to build a small-scale smart greenhouse that can monitor conditions and take basic decisions automatically.

---

## 📌 What This Project Does

The system continuously tracks key environmental parameters inside a greenhouse:

* Temperature
* Soil moisture
* Light intensity

Based on these values, it automatically:

* Turns ON a fan if temperature is high
* Activates a water pump when soil is dry
* Controls lighting based on ambient light

All the data is also sent to a dashboard for real-time monitoring.

---

## ⚙️ How It Works

Sensors are connected to an ESP32, which reads data at regular intervals.

The ESP32 processes this data and:

* Applies simple logic (threshold-based control)
* Controls actuators like fan, pump, and lights
* Sends the data over WiFi to a backend system

A dashboard displays the live data and gives a clear view of the system’s condition.

---

## 🔧 Components Used

* ESP32
* Soil moisture sensor
* Temperature sensor
* LDR (light sensor)
* Water pump
* Fan
* LEDs

---

## 📊 Features

* Real-time environmental monitoring
* Automatic control of actuators
* Live dashboard visualization
* Basic intelligent decision-making
* Scalable to larger systems

---


## 🤔 What I Learned

* Interfacing multiple sensors with ESP32
* Handling real-time data from hardware
* Building a simple IoT pipeline (device → server → dashboard)
* Converting raw sensor values into meaningful insights

---

## 🚀 Future Improvements

* Add machine learning for smarter irrigation decisions
* Store historical data for analysis
* Build a mobile app for remote control
* Extend system for multiple greenhouse units

---



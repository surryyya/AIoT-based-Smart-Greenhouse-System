# 🌱 AIoT-Based Smart Greenhouse System

> A real-time monitoring and automation system for greenhouse environments using ESP32, combined with AI-driven insights for smarter crop management.

---

## 💡 Why I Built This

While exploring IoT and embedded systems, I wanted to build something that solves a real-world problem. Agriculture, especially controlled environments like greenhouses, requires continuous monitoring and precise decision-making.

This project started as a simple IoT system, but I extended it by integrating AI-based modules to make it more intelligent and closer to real-world smart farming solutions.

---

## 📌 What This Project Does

The system continuously monitors key environmental parameters:

* Temperature
* Soil moisture
* Light intensity

Based on these inputs, it automatically:

* Controls ventilation (fan)
* Activates irrigation (water pump)
* Adjusts lighting conditions

In addition, the system includes AI-based modules for predictive insights.

---

## ⚙️ How It Works

Sensors are connected to an ESP32, which reads real-time environmental data.

The ESP32:

* Processes sensor values
* Applies threshold-based control
* Sends data to a backend/dashboard

On the software side:

* A dashboard visualizes live data
* AI modules analyze patterns and provide predictions

---

## 🤖 AI Integration (Key Highlight)

To move beyond basic automation, AI-driven modules were implemented:

* **ANN-based Weather–Disease Prediction**
  Predicts potential plant diseases based on environmental conditions, helping in early intervention.

* **CVAE-based Genotype–Yield Forecasting**
  Estimates crop yield based on genetic and environmental factors, enabling better planning and optimization.

These additions introduce **predictive and intelligent decision-making**, making the system more aligned with modern smart agriculture solutions.

---

## 🔧 Components Used

* ESP32
* Soil Moisture Sensor
* Temperature Sensor
* LDR (Light Sensor)
* Water Pump
* Fan
* LEDs

---

## 📊 Features

* Real-time environmental monitoring
* Automatic control of greenhouse conditions
* IoT-based data transmission
* Live dashboard visualization
* AI-based prediction and analysis
* Scalable system design

---


## 🤔 What I Learned

* Interfacing multiple sensors with ESP32
* Building an end-to-end IoT pipeline
* Working with real-time data systems
* Integrating AI models into embedded-based projects
* Understanding how data can drive intelligent decisions

---

## 🚀 Future Improvements

* Deploy models on cloud for real-time predictions
* Integrate more environmental parameters (CO₂, humidity)
* Mobile app for remote monitoring and control
* Multi-greenhouse centralized monitoring system

---


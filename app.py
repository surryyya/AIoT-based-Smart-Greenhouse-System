import streamlit as st
import requests
import time

st.set_page_config(layout="wide")

st.title("🌱 AIoT Smart Greenhouse Dashboard")

API = "http://localhost:5000/data"

placeholder = st.empty()

while True:
    try:
        data = requests.get(API).json()

        temp = data["temperature"]
        soil = data["soil"]
        light = data["light"]

        col1, col2, col3 = st.columns(3)

        col1.metric("Temperature", f"{temp:.2f} °C")
        col2.metric("Soil Moisture", soil)
        col3.metric("Light", light)

        st.subheader("🤖 AI Control")

        if soil < 2000:
            st.success("Irrigation Needed")
        else:
            st.info("No Irrigation Needed")

        if temp > 35:
            st.error("High Temperature Detected")
        else:
            st.success("System Normal")

    except:
        st.warning("Waiting for ESP32 data...")

    time.sleep(2)
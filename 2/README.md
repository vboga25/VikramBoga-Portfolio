# Wearable Assistive Device for the Visually Impaired: A Hands-free solution  

This project, undertaken as the Capstone Project for my Bachelor's degree, aims to develop a wearable assistive device to enhance mobility and independence for visually impaired individuals. The system combines haptic feedback and voice navigation to provide real-time guidance, enabling users to navigate safely and efficiently. The primary objective was to create a user-friendly, cost-effective, and modern alternative to traditional white canes.  

<div style="text-align: center;">
  <img src="obstacle_avoid\assets\Phase1_WornOnPerson.jpg" alt="Obstacle avoidance module when worn on person's leg" style="width: 15%; display: inline-block; margin: 0 20%;">
  <img src="voice_navigate\assets\DeviceOnHand.png" alt="BLE Navigation module when worn on hand" style="width: 45%; display: inline-block; margin: 0 10%;">
</div>

---

## **Key Features**  

### 1. Obstacle Detection and Avoidance  
- Features dual ultrasonic sensors strategically worn on the ankle and knee to detect obstacles in the user's path effectively.
- Provides real-time dynamic haptic feedback via coin vibration motor, intuitively alerting users to the presence and proximity of obstacles.

### 2. Voice Navigation Assistance  
- Utilizes BLE beacons strategically placed indoors to provide precise turn-by-turn navigation through triangulation and proximity detection.
- Voice commands, enabled through an ESP32 microcontroller, integrate with Google Assistant or Alexa for seamless navigation support.

### 3. Dual Microcontroller Architecture  
- **Arduino Uno**: Manages obstacle detection and dynamic haptic feedback.  
- **ESP32**: Handles WiFi & BLE connectivity, voice commands, and integration with IoT platforms. 

### 4. Custom Enclosure Design  
- Designed durable and lightweight enclosures using Fusion 360.
<div style="text-align: center;">
  <img src="obstacle_avoid\cad_captures\4_ArduinoCase.png" alt="CAD design of case designed for Obstacle avoidance module" style="width: 15%; display: inline-block; margin: 0 20%;">
  <img src="voice_navigate\cad_captures\3_CaseExplodedView.png" alt="CAD design of the indoor navigation module" style="width: 45%; display: inline-block; margin: 0 10%;">
</div>
- Fabricated using FDM 3D printing for robustness and user comfort.

### 5. IoT and MQTT Integration  
- Uses MQTT protocol for effectivecommunication between devices and cloud platforms, enabling remote triggering and data collection.  

### 7. Usability Testing and Iterative Development  
- Rigorously tested with over 50 participants.  
- Iterative improvements were implemented based on user feedback to enhance practicality and effectiveness in real-world scenarios. Comprehensive documentation of the feedback and results was maintained to evaluate the device's usefulness and impact.

### 8. Energy Efficiency  
- Optimized for low power consumption to maximize battery life and ensure reliability during prolonged use.  

---

## **Technologies Used**  
- **Microcontrollers**: Arduino Uno, ESP32  
- **Sensors**: Ultrasonic sensors for obstacle detection  
- **Actuators**: Vibration motors for haptic feedback  
- **Communication Protocols**: BLE, WiFi, MQTT
- **Software**: Fusion 360 for CAD design, Arduino IDE for programming  
- **Fabrication**: FDM 3D printing for enclosure design  
- **Programming Languages & Libraries**: C++ for microcontroller programming; NimBLE (Bluetooth LE library for ESP32)

---

## **How It Works**  

### **Obstacle Detection and Feedback**  
1. Ultrasonic sensors continuously scan for obstacles in the user’s path.
2. The Arduino Uno processes sensor data and triggers vibration motors to alert users of obstacles.
3. The following algorithm has been implemented for this module:
<div style="text-align: center;">
  <img src="obstacle_avoid\avoid_algorithm.png" alt="Obstacle avoidance algorithm" style="width: 25%; display: inline-block; margin: 1 20%;">
</div>

### **Navigation Assistance**  
1. BLE beacons provide accurate location data for turn-by-turn guidance.  
2. The ESP32 microcontroller sends navigation prompts via voice commands through Google Assistant or Alexa.  

### **IoT Integration**  
1. The device uses MQTT for cloud communication, enabling real-time monitoring and data analysis.  
2. This allows remote updates and optimizations for enhanced functionality.  

---

## **Results**  
- The system successfully combined obstacle detection and navigation assistance into a compact, wearable forms.  
- Testing with over 50 participants demonstrated the system’s effectiveness in improving navigation and mobility.  
- Iterative improvements led to a robust and reliable system tailored to user needs.  

---

## **Future Work**  
- Upgrade Bluetooth hardware to Bluetooth v5.0 or later for improved accuracy and reliability.
- Conduct more comprehensive testing and validation to assess device efficacy and reliability across diverse environments and user scenarios.
- Integrate machine learning algorithms for adaptive navigation to improve user autonomy and safety.

---

## **Acknowledgments**  
Special thanks to the project mentor, [Dr. Ramya Moorthy](https://www.manipal.edu/mit/department-faculty/faculty-list/dr-ramya-s-moorthy/_jcr_content.html) and all participants for their invaluable support and feedback during the development of this project.  

---
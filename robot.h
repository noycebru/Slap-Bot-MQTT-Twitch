/*******************************************************************
  Connect to local MQTT server with a Bot

  Created with code from noycebru www.twitch.tv/noycebru
 *******************************************************************/

#ifndef SLAP_MACHINE_H
#define SLAP_MACHINE_H

// Configure your default pin numbers
const int LED_PIN = 5;
const int SLAP_PIN = 12;

const int SERVO_HOME_POSITION = 0;
const int SERVO_FULL_POSITION = 180;
const int SERVO_PARTIAL_POSITION = 100;

// The amount of time to activate the robot
const int ACTIVATE_DEFAULT = 3; // time in ms

//------- Update the following! ------
const String MQTT_ID = "slap-robot-001"; // ID for this client when connecting to MQTT
const String MQTT_BROKER = "192.168.1.22"; // Hostname or IP of your MQTT server
const int MQTT_PORT = 1883; // Set the port used by your MQTT server
const int MQTT_RECONNECT_DELAY = 5000; // Time in ms to wait between reconnect attempts
const int MQTT_TOPIC_COUNT = 1; // This should match the number of topics you wish to subscribe to
const String MQTT_TOPIC[MQTT_TOPIC_COUNT] = {"slappy"}; // The topic name you wish to listen for

#endif

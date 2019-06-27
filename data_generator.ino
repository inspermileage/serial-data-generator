// https://arduino.stackexchange.com/questions/4214/communication-protocol-best-practices-and-patterns

char *sensorName[] = { 
  "accelerometer",
  "altimeter",
  "barometer",
  "temperature",
  "rpm",
  "voltage",
  "current"
};

float sensorData[7][2]= {
 {10, 50},
 {1500, 1700},
 {1000, 1200},
 {250, 400},
 {15000, 30000},
 {0, 400},
 {0, 50},
};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("<");
  Serial.print((float)random(0, 2)); // Button Command
  Serial.print(",");
  for(int x = 0; x < 7; x++){
      //Serial.print(sensorName[x]);
      //Serial.print(":");
      Serial.print((float)random(sensorData[x][0], sensorData[x][1])/100);

      if(x != 6){
        Serial.print(",");
      }
  }
  Serial.print(">");
  delay(1000);
}
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

int sensorData[7][2]= {
 {1, 5},
 {150, 170},
 {100, 120},
 {25, 40},
 {1500, 3000},
 {0, 40},
 {0, 5},
};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("<");
  Serial.print(random(0, 2)); // Button Command
  Serial.print(",");
  for(int x = 0; x < 7; x++){
      //Serial.print(sensorName[x]);
      //Serial.print(":");
      Serial.print(random(sensorData[x][0], sensorData[x][1]));

      if(x != 6){
        Serial.print(",");
      }
  }
  Serial.println(">");
  delay(1000);
}

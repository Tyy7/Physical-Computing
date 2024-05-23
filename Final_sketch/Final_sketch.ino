// This code is inspired from Tom Igoe


void setup() {


  Serial.begin(9600); // We are able to read the value of light to the photoresistor
}

void loop() {

  // read the sensor:

  int sensorReading = analogRead(A0);


  Serial.println(sensorReading); // Prints the reading into the serial monitor

  int thisPitch = map(sensorReading, 400, 1000, 120, 1500); // If the sensor is reading a value

  tone(9, thisPitch, 10); // Play the pitch

  delay(1); 
}
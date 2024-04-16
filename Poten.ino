#define LED_PIN 11
#define POTENTIOMETER_PIN A1

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  int brightness = map(brightness,0,1024,0,255)
  analogWrite(LED_PIN, brightness);
}
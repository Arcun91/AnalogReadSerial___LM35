const int buttonPin = 2;
int buttonState = 0;  
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    int sensorValue = analogRead(A0);  
    float millivolts = (sensorValue / 1024.0) * 5000; 
    float celsius = millivolts / 10;
    Serial.print("Valore Sensore ");
    Serial.print(sensorValue);
    Serial.print(" Temperatura stimata:");
    Serial.println(celsius); 
  }
}

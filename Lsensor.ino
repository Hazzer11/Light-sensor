void setup() {
}

void loop() {
    int analogvalue = analogRead(A0);
    Particle.publish("Light_level", String(analogvalue), PRIVATE);
    delay(2000);
}

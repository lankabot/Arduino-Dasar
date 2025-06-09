const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT); // LED terhubung ke pin 13
}

void loop() {
  digitalWrite(LED, HIGH); // Nyalakan LED
  delay(1000);            // Tunggu 1 detik
  digitalWrite(LED, LOW);  // Matikan LED
  delay(1000);            // Tunggu 1 detik
}
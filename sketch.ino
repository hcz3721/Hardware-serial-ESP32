#define RX1 23
#define TX1 22
HardwareSerial hwSerial_1(1);
void setup() {
  // Zahájení komunikace pro:
  //  HW serial port pro propojení s PC
  Serial.begin(115200);
  //  HW Serial porty na daných pinech RX a TX
  hwSerial_1.begin(115200, SERIAL_8N1, RX1, TX1);
  Serial.begin(115200);
}

void loop() {
  while (hwSerial_1.available()) {
    // vytvoření proměnné pro uložení načteného znaku
    char c = hwSerial_1.read();
    Serial.write(c);
  }
}

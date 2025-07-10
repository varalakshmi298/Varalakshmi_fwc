// Pin definitions
const int pinX = 2;
const int pinY = 3;
const int pinZ = 13;  // Output pin

void setup() {
  // Set input and output pin modes
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(pinZ, OUTPUT);

  // Optional: serial monitor for debugging
  Serial.begin(9600);
}

void loop() {
  // Read inputs
  int X = digitalRead(pinX);
  int Y = digitalRead(pinY);

  // Compute Z = X XOR Y
  int Z = X ^ Y;

  // Output the result
  digitalWrite(pinZ, Z);

  // Debug output
  Serial.print("X=");
  Serial.print(X);
  Serial.print(" Y=");
  Serial.print(Y);
  Serial.print(" -> Z=");
  Serial.println(Z);

  delay(200);  // Small delay for stability
}


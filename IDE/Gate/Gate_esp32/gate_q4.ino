// Pin definitions
const int pinA = 2;
const int pinB = 3;
const int pinF = 13;  // Output pin (e.g., LED)

void setup() {
  // Setup pins
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  pinMode(pinF, OUTPUT);

  // Optional: serial monitor
  Serial.begin(9600);
}

void loop() {
  // Read inputs
  int A = digitalRead(pinA);
  int B = digitalRead(pinB);

  // Compute F = A AND NOT B
  int F = A && !B;

  // Output the result
  digitalWrite(pinF, F);

  // Optional debug output
  Serial.print("A=");
  Serial.print(A);
  Serial.print(" B=");
  Serial.print(B);
  Serial.print(" -> F=");
  Serial.println(F);

  delay(200);
}


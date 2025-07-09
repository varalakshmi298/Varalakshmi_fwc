// Define input pins
const int P_pin = 2;
const int Q_pin = 3;
const int R_pin = 4;

// Define LED output pin
const int LED_pin = 13;

void setup() {
  // Initialize input pins with internal pull-up resistors
  pinMode(P_pin, INPUT_PULLUP);
  pinMode(Q_pin, INPUT_PULLUP);
  pinMode(R_pin, INPUT_PULLUP);

  // Initialize LED pin as output
  pinMode(LED_pin, OUTPUT);

  // Start Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Read inputs (invert logic because of INPUT_PULLUP)
  int P = !digitalRead(P_pin);
  int Q = !digitalRead(Q_pin);
  int R = !digitalRead(R_pin);

  // Calculate function terms
  int PQ = P & Q;
  int QR_ = Q & (!R);
  int PR_ = P & (!R);

  // Final function
  int f = PQ | QR_ | PR_;

  // Set LED based on result
  digitalWrite(LED_pin, f);

  // Print debug info to Serial Monitor
  Serial.print("P: "); Serial.print(P);
  Serial.print(" Q: "); Serial.print(Q);
  Serial.print(" R: "); Serial.print(R);
  Serial.print(" => f(P,Q,R): "); Serial.println(f);

  delay(300); // Delay for debounce and readability
}

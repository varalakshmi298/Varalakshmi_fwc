const int X = 2;
const int Y = 3;
const int Z = 4;
const int F = 13;

void setup() {
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  pinMode(Z, INPUT);
  pinMode(F, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int x_val = digitalRead(X);
  int y_val = digitalRead(Y);
  int z_val = digitalRead(Z);

  bool f_val = (!x_val && !y_val) || (y_val && z_val);

  digitalWrite(F, f_val);

  // Debug print to Serial Monitor
  Serial.print("X: "); Serial.print(x_val);
  Serial.print("  Y: "); Serial.print(y_val);
  Serial.print("  Z: "); Serial.print(z_val);
  Serial.print("  F: "); Serial.println(f_val);

  delay(300);
}

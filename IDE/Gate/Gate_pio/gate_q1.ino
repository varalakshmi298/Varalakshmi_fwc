// Pin definitions
const int X = 2;   // Input
const int Y = 3;   // Input
const int Z = 4;   // Input
const int F = 13;  // Output (built-in LED on most Arduinos)

void setup() {
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  pinMode(Z, INPUT);
  pinMode(F, OUTPUT);
}

void loop() {
  int x_val = digitalRead(X);
  int y_val = digitalRead(Y);
  int z_val = digitalRead(Z);

  // Logic: F = (!X && !Y) || (Y && Z)
  bool not_x_and_not_y = (!x_val) && (!y_val);
  bool y_and_z = y_val && z_val;
  bool f_val = not_x_and_not_y || y_and_z;

  digitalWrite(F, f_val);
  delay(10);
}

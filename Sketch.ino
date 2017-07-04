#define R A1
#define G A2
#define B A3
#define L A4

int r, g, b;

void setup() {  
  Serial.begin(9600);
}

void loop() {
  int oldr = r, oldg = g, oldb = b;
  r = map(analogRead(R), 0, 1023, 0, 255);
  g = map(analogRead(G), 0, 1023, 0, 255);
  b = map(analogRead(B), 0, 1023, 0, 255);

  if (oldr == r && oldg == g && oldb == b) {
    return;
  }

  Serial.write(r);
  Serial.write(g);
  Serial.write(b);
  Serial.flush();
    
  delay(100);
}
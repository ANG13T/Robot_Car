// Motor A
 
const int in1 = 7;
const int in2 = 6;
 
// Motor B
const int in3 = 5;
const int in4 = 4;
 
// Joystick Input
 
const int joyVert = A0; // Vertical  
const int joyHorz = A1; // Horizontal

const int ENA = 8;
const int ENB = 3;
 
// Motor Speed Values - Start at zero
 
int MotorSpeed1 = 0;
int MotorSpeed2 = 0;


void setup(){
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop(){
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

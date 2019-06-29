void setup() {
  // put your setup code here, to run once:

  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  int pressureInt = analogRead(A0);

  analogWrite(10, map(pressureInt, 0, 1023, 0, 160));

  Serial.println(pressureInt);
  
}

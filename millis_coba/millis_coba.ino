unsigned long time;

void setup(){
  Serial.begin(9600);
}
void loop(){
  time = millis()/1000;
  //prints time since program started
  Serial.println(time);
}

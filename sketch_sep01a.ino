void linkpulse(void){
  for (int i=0;i<100;i++){
    PORTB=B01010101;
    PORTB=B10101010;
    delay(16);
    }
  }

void setup(){
DDRB=B11111111;
//pinMode(2,INPUT_PULLUP);
while(1){
  linkpulse();
  dot();
  linkpulse();
  space();
  linkpulse();
  dash();
  }
}
void loop(){
}

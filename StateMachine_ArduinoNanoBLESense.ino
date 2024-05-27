// pin definitions
//red led
int red_led =22,red_delay=5000; //blue led
int blue_led= 23,blue_delay=4000; //green led
int green_led=24,green_delay=3000;
// button
int buttonPin = 2;
bool button_state=true;
//Initial ,current and state
int ini_time=0;
int curr_time=0;
volatile bool shift=false;
// ALL states as enum variable enum state {
Off, Red, Blue, Green
};
// Declare Current_state as a global variable state Current_state = Off;
state Previous_state = Off;
void setup() {
// set RGB LED to OUTPUT pinMode(red_led,OUTPUT); pinMode(blue_led,OUTPUT); pinMode(green_led,OUTPUT);
// set Button as input and pullup it's state pinMode(buttonPin,INPUT_PULLUP);
// using button as interrupt attachInterrupt(digitalPinToInterrupt(buttonPin), ButtonPress, FALLING);
// Initialize serial communication Serial.begin(9600);
}
void ButtonPress() {
ini_time=millis();
 // state change - Off to Red if (Current_state == Off) {
Current_state = Red; }
// state change - Red to Blue
else if (Current_state == Red) {
Current_state = Blue; }
// state change - Blue to Green else if (Current_state == Blue) {
Current_state = Green; }
// state change - Green to Off
else if (Current_state == Green) {
Current_state = Off; }
}
void loop() { // select state
switch (Current_state ){ // Off state
case Off: digitalWrite(red_led,1); digitalWrite(blue_led,1); digitalWrite(green_led,1); break;
// Red LED ON case Red:
// ini_time at first iteration and check for shift is true
if (Previous_state != Red || shift) ini_time = millis();
// calculate current time curr_time=millis()-ini_time;
Serial.println(curr_time);
// check for current time and delay
if(curr_time<= red_delay) {
shift=false; digitalWrite(red_led,0); digitalWrite(blue_led,1); digitalWrite(green_led,1);
}
// shift to other state and and set shift to true

 else {
Current_state=Off;
shift=true; }
break;
case Blue:
// ini_time at first iteration and check for shift is true
if (Previous_state != Blue || shift) ini_time = millis(); // calculate current time
curr_time=millis()-ini_time; Serial.println(curr_time);
// check for current time and delay if(curr_time<=blue_delay)
{
shift=false; digitalWrite(red_led,1); digitalWrite(blue_led,0); digitalWrite(green_led,1);
}
// shift to other state and and set shift to true
else {
Current_state=Red; shift=true;
} break;
case Green:
// ini_time at first iteration and check for shift is true
if (Previous_state != Green||shift) ini_time = millis(); // calculate current time
curr_time=millis()-ini_time; Serial.println(curr_time);
// check for current time and delay if(curr_time<=green_delay)
{
shift=false; digitalWrite(red_led,1); digitalWrite(blue_led,1); digitalWrite(green_led,0);

}
// shift to other state and and set shift to true
else {
Current_state=Blue; shift=true;
} break; }
//update previous state as current state Previous_state = Current_state;
}

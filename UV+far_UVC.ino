/* Lamp against coronavirus
 * Designers: Nargiza Deidieva, Linda Dankwa
 */
/* Below is digital pin assignment for UV strong lamp and far lamp
 *  as well as for motion sensor
 */
const int UV_lamp_output = 13;
const int Far_lamp_output = 3;
const int motion_input= 2;

void setup(){
pinMode(UV_lamp_output, OUTPUT); // strong and more toxic lamp
pinMode(Far_lamp_output, OUTPUT); // mild and harmless lamp
pinMode(motion_input, INPUT);
}

void loop(){
int value= digitalRead(motion_input);
int x;
if (value == LOW) // means no motion detected
{

//the lamp has to shine for one hour and that's why for loop counts until 600000
for(x=0; x < 600000; x++){
  if(value == LOW){
digitalWrite(UV_lamp_output, HIGH); // 
digitalWrite(Far_lamp_output, LOW);
  }
  else{
x= 600000;
}
}  
}

else
{
digitalWrite(UV_lamp_output, LOW); // 
digitalWrite(Far_lamp_output, HIGH);
delay(60000);
}
}

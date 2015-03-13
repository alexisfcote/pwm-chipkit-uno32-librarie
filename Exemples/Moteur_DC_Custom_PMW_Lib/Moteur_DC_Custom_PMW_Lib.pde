#include <PWM_ChipKit.h>
#define module (int) 2500 //1000 Hz
PWM1 PWM=PWM1(module);
void setup() {                

}

void loop() {
  for (int i=0;i<=module;i++){
    PWM.PWM_Value(3,i);
    delay(10*1000/module);
  }
  for (int i=module;i>=0;i--){
    PWM.PWM_Value(3,i);
    delay(10*1000/module);
  }
    for (int i=0;i<=module;i++){
    PWM.PWM_Value(5,i);
    delay(10*1000/module);
  }
  for (int i=module;i>=0;i--){
    PWM.PWM_Value(5,i);
    delay(10*1000/module);
  }
}





#include <AlcoBorne.h>
AlcoBorne alco;
void setup()
{
}

void loop()
{
  alco.LED_R_ON();  //Switch ON the Red Light
  delay(500);       //Wait 500ms
  alco.LED_O_ON();  //Switch ON the Orange Light
  delay(500);       //Wait 500ms
  alco.LED_V_ON();  //Switch ON the Green Light
  delay(500);       //Wait 500ms
  alco.LED_R_OFF(); //Switch OFF the Red Light
  delay(500);       //Wait 500ms
  alco.LED_O_OFF(); //Switch OFF the Orange Light
  delay(500);       //Wait 500ms
  alco.LED_V_OFF(); //Switch OFF the Green Light
  delay(500);       //Wait 500ms
}


#include <AlcoBorne.h>
AlcoBorne alco;
void setup()
{
}

void loop()
{
  alco.LED_R_ON();  //Switch ON the Red Light
  alco.LED_O_ON();  //Switch ON the Orange Light
  alco.LED_V_ON();  //Switch ON the Green Light
  alco.LED_R_OFF(); //Switch OFF the Red Light
  alco.LED_O_OFF(); //Switch OFF the Orange Light
  alco.LED_V_OFF(); //Switch OFF the Green Light
}


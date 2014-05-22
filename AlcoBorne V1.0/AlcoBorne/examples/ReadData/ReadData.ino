#include <AlcoBorne.h>
AlcoBorne alco;
int value;
void setup()
{
	Serial.begin(9600);	//Start a serial Communication
}

void loop()
{
  value = alco.Get_Pression();	//Get the value of presure
  Serial.println(value);		//Send to the serial the value
  delay(1000);					//Wait 1 seconde
}
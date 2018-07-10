#include <AlcoBorne.h>
AlcoBorne alco;
int value;
void setup()
{
	Serial.begin(9600);	//Start a serial Communication
}

void loop()
{
	/*
		Setting value
	*/
	alco.LED_R_ON();		//Switch ON the Red Light
	alco.LED_O_ON();		//Switch ON the Orange Light
	alco.LED_V_ON();		//Switch ON the Green Light
	alco.Admission_ON();	//Switch ON the Admission Resistance
	alco.Cuve_ON();			//Switch ON the Cuve Resistance
	alco.Pompe_ON();		//Switch ON the Pompe
	alco.Emetteur_ON();		//Switch ON the Infra Red Sender
	alco.Vanne_ON();		//Switch ON the 3 voice Vanne
	alco.BP_ON();			//Push BP ON
	delay(1000);			//Wait 1seconde
	alco.LED_R_OFF();		//Switch OFF the Red Light
	alco.LED_O_OFF();		//Switch OFF the Orange Light
	alco.LED_V_OFF();		//Switch OFF the Green Light
	alco.Admission_OFF();	//Switch OFF the Admission Resistance
	alco.Cuve_OFF();		//Switch OFF the Cuve Resistance
	alco.Pompe_OFF();		//Switch OFF the Pompe
	alco.Emetteur_OFF();	//Switch OFF the Infra Red Sender
	alco.Vanne_OFF();		//Switch OFF the 3 voice Vanne
	/*
		Get value
	*/
	Serial.println(alco.Get_Pression());	//Get the Presure value
	Serial.println(alco.Get_Cuve());		//Get the value of the temperature of cuve
	Serial.println(alco.Get_Admission());	//Get the value of the temperature of the Admission
}
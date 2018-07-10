/*!
	\File AlcoBorne.cpp
	\brief Fonctions
*/
#include "Arduino.h"
#include "AlcoBorne.h"
/*!
	\fn void AlcoBorne(void);
	\brief Constructeur
*/
AlcoBorne::AlcoBorne(){
/*
	Assignation des pattes
*/
	LED_R = 10;					//! \brief Assignation de la patte 10 a la LED Rouge
	LED_O = 9;					//! \brief Assignation de la patte 9 a la LED Orange
	LED_V = 8;					//! \brief Assignation de la patte 8 a la LED Verte
	_BP_ON = 7;					//! \brief Assignation de la patte 7 au Bouton poussoir ON
	Admission = 6;				//! \brief Assignation de la patte 6 au chauffage de l'admission
	Cuve = 5;					//! \brief Assignation de la patte 5 au chauffage de la cuve
	Pompe = 4;					//! \brief Assignation de la patte 4 a la pompe
	Emetteur = 3;				//! \brief Assignation de la patte 3 a l'Emetteur Infra Rouge
	Vanne = 2;					//! \brief Assignation de la patte 2 a la vanne 3 voie
	Pression = A1;				//! \brief Assignation de la patte A1 a	la pression
	Temp_Cuve = A2;				//! \brief Assignation de la patte A2 a la temperature de la cuve
	Temp_Admission = A3;		//! \brief Assignation de la patte A3 a la temperature de l'admission
/*
	Definition des entrees sorties
*/
	pinMode(LED_R, OUTPUT);		//! \brief Mise en sortie de la LED Rouge
	pinMode(LED_O, OUTPUT);		//! \brief Mise en sortie de la LED Orange
	pinMode(LED_V, OUTPUT);		//! \brief Mise en sortie de la LED Verte
	pinMode(_BP_ON, OUTPUT);	//! \brief Mise en sortie du Boutton ON
	pinMode(Admission, OUTPUT);	//! \brief Mise en sortie de l'admission
	pinMode(Cuve, OUTPUT);		//! \brief Mise en sortie de la cuve
	pinMode(Pompe, OUTPUT);		//! \brief Mise en sortie de la pompe
	pinMode(Emetteur, OUTPUT);	//! \brief Mise en sortie de l'emmeteur Infra rouge
	pinMode(Vanne, OUTPUT);		//! \brief Mise en sortie de la vanne 3 voie
/*
	Exteinction des sorties
*/
	digitalWrite(LED_R,!LOW);	//! \brief Mise a zero de la LED Rouge
	digitalWrite(LED_O,!LOW);	//! \brief Mise a zero de la LED Orange
	digitalWrite(LED_V,!LOW);	//! \brief Mise a zero de la LED Verte
	digitalWrite(_BP_ON,LOW);	//! \brief Mise a zero du bouton ON
	digitalWrite(Admission,LOW);//! \brief Mise a zero de l'admission
	digitalWrite(Cuve,LOW);		//! \brief Mise a zero de la cuve
	digitalWrite(Pompe,LOW);	//! \brief Mise a zero de la pompe
	digitalWrite(Emetteur,LOW);	//! \brief Mise a zero de l'emmeteur
	digitalWrite(Vanne,LOW);	//! \brief Mise a zero de la vanne
}
/*!
	\fn void LED_R_ON(void);
	\brief Alumage de la LED Rouge
*/
void AlcoBorne::LED_R_ON(){
	digitalWrite(LED_R,!HIGH);	//! \brief Allumage de la LED Rouge
}
/*!
	\fn void LED_O_ON(void);
	\brief Alumage de la LED Orange
*/
void AlcoBorne::LED_O_ON(){
	digitalWrite(LED_O,!HIGH);	//! \brief Alumage de la LED Orange
}
/*!
	\fn void LED_V_ON(void);
	\brief Alumage de la LED Verte
*/
void AlcoBorne::LED_V_ON(){
	digitalWrite(LED_V,!HIGH);	//! \brief Alumage de la LED Verte
}
/*!
	\fn void Admission_ON(void);
	\brief Alumage du chauffage de l'admisssion
*/
void AlcoBorne::Admission_ON(){
	digitalWrite(Admission,HIGH);//! \brief Alumage du chauffage de l'admisssion
}
/*!
	\fn void Cuve_ON(void);
	\brief Alumage du chauffage de la cuve
*/
void AlcoBorne::Cuve_ON(){
	digitalWrite(Cuve,HIGH);//!	\brief Alumage du chauffage de la cuve
}
/*!
	\fn void Pompe_ON(void);
	\brief Alumage de la pompe
*/
void AlcoBorne::Pompe_ON(){
	digitalWrite(Pompe,HIGH);//! \brief Alumage de la pompe
}
/*!
	\fn void Emetteur_ON(void);
	\brief Alumage de lemetteur Infra rouge
*/
void AlcoBorne::Emetteur_ON(){
	digitalWrite(Emetteur,HIGH);//! \brief Alumage de lemetteur Infra rouge
}
/*!
	\fn void Vanne_ON(void);
	\brief Alumage de la vanne 3 voie
*/
void AlcoBorne::Vanne_ON(){
	digitalWrite(Vanne,HIGH);//! \brief Alumage de la vanne 3 voie
}
/*!
	\fn void BP_ON(void);
	\brief Appuie sur le Boutton ON
*/
void AlcoBorne::BP_ON(){
	digitalWrite(_BP_ON,HIGH);	//! \brief Activation du boutton ON
	delay(50);					//! \brief Attente de 50ms
	digitalWrite(_BP_ON,LOW);	//! \brief Desactivation du boutton ON
}
/*!
	\fn void LED_R_OFF(void);
	\brief Desactivation de la LED Rouge
*/
void AlcoBorne::LED_R_OFF(){
	digitalWrite(LED_R,!LOW);	//! \brief Desactivation de la LED Rouge
}
/*!
	\fn void LED_O_OFF(void);
	\brief Desactivation de la LED Orange
*/
void AlcoBorne::LED_O_OFF(){
	digitalWrite(LED_O,!LOW);	//! \brief Desactivation de la LED Orange
}
/*!
	\fn void LED_V_OFF(void);
	\brief Desactivation de la LED Verte
*/
void AlcoBorne::LED_V_OFF(){
	digitalWrite(LED_V,!LOW);	//! \brief Desactivation de la LED Verte
}
/*!
	\fn void Admission_OFF(void);
	\brief Desactivation du chauffage de l'admission
*/
void AlcoBorne::Admission_OFF(){
	digitalWrite(Admission,LOW);	//! \brief Desactivation du chauffage de l'admission
}
/*!
	\fn void Cuve_OFF(void);
	\brief Desactivation du chauffage de la Cuve
*/
void AlcoBorne::Cuve_OFF(){
	digitalWrite(Cuve,LOW);	//! \brief Desactivation du chauffage de la Cuve
}
/*!
	\fn void Pompe_OFF(void);
	\brief Desactivation de la Pompe
*/
void AlcoBorne::Pompe_OFF(){
	digitalWrite(Pompe,LOW);	//! \brief Desactivation de la Pompe
}
/*!
	\fn void Emetteur_OFF(void);
	\brief Desactivation de l'emetteur
*/
void AlcoBorne::Emetteur_OFF(){
	digitalWrite(Emetteur,LOW);	//! \brief Desactivation de l'emetteur
}
/*!
	\fn void Vanne_OFF(void);
	\brief Desactivation de la vanne 3 voie
*/
void AlcoBorne::Vanne_OFF(){
	digitalWrite(Vanne,LOW);	//! \brief Desactivation de la vanne 3 voie
}
/*!
	\fn void Get_Pression (void);
	\brief Recuperation de la pression
*/
int AlcoBorne::Get_Pression(){
	return analogRead(A0);	//! \brief Recuperation de la pression
}
/*!
	\fn void Get_Cuve (void);
	\brief Recuperation de la temperature de la cuve
*/
int AlcoBorne::Get_Cuve(){
	return analogRead(A1);	//! \brief Recuperation de la temperature de la cuve
}
/*!
	\fn void Get_Admission (void);
	\brief Recuperation de la temperature de l'admission
*/
int AlcoBorne::Get_Admission(){
	return analogRead(A2);	//!\brief Recuperation de la temperature de l'admission
}
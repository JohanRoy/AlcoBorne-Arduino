/*!
	\File AlcoBorne.h
	\brief Prototypes
*/
#ifndef AlcoBorne_h
#define AlcoBorne_h
#include "Arduino.h"

class AlcoBorne{
	public:
		AlcoBorne(void);
		void LED_R_ON(void);
		void LED_O_ON(void);
		void LED_V_ON(void);
		void Admission_ON(void);
		void Cuve_ON(void);
		void Pompe_ON(void);
		void Emetteur_ON(void);
		void Vanne_ON(void);
		void BP_ON(void);
		void LED_R_OFF(void);
		void LED_O_OFF(void);
		void LED_V_OFF(void);
		void Admission_OFF(void);
		void Cuve_OFF(void);
		void Pompe_OFF(void);
		void Emetteur_OFF(void);
		void Vanne_OFF(void);
		int Get_Pression(void);
		int Get_Cuve(void);
		int Get_Admission(void);
	private:
		int LED_R;
		int LED_O;
		int LED_V;
		int _BP_ON;
		int Admission;
		int Cuve;
		int Pompe;
		int Emetteur;
		int Vanne;
		int Pression;
		int Temp_Cuve;
		int Temp_Admission;
};
#endif
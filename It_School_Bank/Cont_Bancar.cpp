#include "Cont_Bancar.h"

Cont_Bancar::Cont_Bancar(std::string nume, std::string prenume, std::string IBAN)
{
	this->nume = nume;// folosim "this" pentru a preveni ambiguitatea...se face referire la parametri din clasa
	this->prenume = prenume;
	this-> IBAN = IBAN;
	sold = 0;
	etipCont = TIP_CONT::CONT_RON;
}

#pragma once
#include <string>
enum class TIP_CONT
{
	CONT_RON , 
	CONT_EURO , 
	CONT_DOLAR //SE POT PUNE ASA SAU una in continuarea alteia dar despartite cu "virgula"
};

class Cont_Bancar
{
private:
	// nume,prenume, sold, tip de cont (valuta sau lei) IBAN
	std::string nume;
	std::string prenume;
	int sold;
	TIP_CONT etipCont;
	std::string IBAN;
public:
	Cont_Bancar(std::string nume, std::string prenume, std::string IBAN);
	~Cont_Bancar();

};


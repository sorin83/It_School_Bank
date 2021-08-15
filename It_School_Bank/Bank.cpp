#include "Bank.h"

std::string Bank::createIban()
{
	// trebuie extins ca sa fie un iban unic

	std::string iban = "123";
	return std::string();
}

Bank::Bank()
{
}

Bank::~Bank()
{
	m_ConturiBancare.clear();
}

void Bank::adaugareCont()
{
	system("CLS");
	std::cout << "Introduceti numele utilizatorului: \n";
	std::string nume;
	std::cin >> nume;
	std::cout << "Introduceti prenumele utilizatorului: \n";
	std::string prenume;
	std::cin >> prenume;
	std::string iban = createIban();
	Cont_Bancar* cont = new Cont_Bancar(nume, prenume, iban);
	m_ConturiBancare.push_back(cont);
	std::cout << "1-> pentru crearea unui cont\n";
	std::cout << "2-> pentru meniul principal\n";
	char optiune;
	std::cin >> optiune;
	switch (optiune)
	{
	case '1':
		adaugareCont();
		break;
	default:
		break;
	}

}

void Bank::vizualizareConturi()
{
	std::cout << "Numarul de conturi in banca este: " << m_ConturiBancare.size() << std::endl;
	for (int i = 0; i < m_ConturiBancare.size(); i++)
	{
		std::cout << "Contul " << i+1 << " " << m_ConturiBancare[i]->getNume() << std::endl;
	}
}

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
	std::cin.ignore();
	system("CLS");
	std::cout << "Introduceti numele utilizatorului: \n";
	std::string nume;
	std::getline(std::cin, nume);
	std::cout << "Introduceti prenumele utilizatorului: \n";
	std::string prenume;
	std::getline(std::cin, prenume);
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
	system("CLS");
	std::cout << "Numarul de conturi in banca este: " << m_ConturiBancare.size() << std::endl;
	for (int i = 0; i < m_ConturiBancare.size(); i++)
	{
		std::cout << "Contul " << i+1 << " " << m_ConturiBancare[i]->getNume() << std::endl;
	}
	std::cout << "1-> Pentru crearea unui cont nou\n";
	std::cout << "2-> Pentru meniul principal\n";
	char optiune;
	std::cin >> optiune;
	switch (optiune)
	{
	case'1':
		system("cls");
		adaugareCont();
		break;
	default:
		system("cls");
		break;
	}
}

void Bank::modificareCont()
{
	system("cls");
	// se intreaba operatorul care cont doreste sa il modifice

	std::cout << "Introduceti numele si prenumele contului\n";
	std::cout << "Introduceti numele de familie\n";
	std::string nume;
	std::cin >> nume;
	std::cout << "Introduceti prenumele\n";
	std::string prenume;
	std::cin >> prenume;
	
	//cautam contul

	Cont_Bancar* temp = nullptr;
	for (int i = 0; i < m_ConturiBancare.size(); i++)
	{
		if (nume==m_ConturiBancare[i]->getNume()&& prenume == m_ConturiBancare[i]->getPrenume())
		{
			temp = m_ConturiBancare[i];
			break;

		}

	}
	if (temp==nullptr)
	{
		std::cout << "Contul nu a fost gasit " << std::endl;
		std::cout << "1-> intoarcere la meniu principal\n";
		std::cout << "2-> creati un cont\n";
		std::cout << "3-> cautati un alt cont\n";
		char optiune;
		std::cin >> optiune;
		switch (optiune)
		{
		case'1':
			std::cout << "Going back\n";
			break;
		case'2':
			adaugareCont();
			break;
		case'3':
			modificareCont();
			break;
		default:
			break;
		}


	}
	else
	{
		std::cout << "Ce modificari vreti s afaceti\n";
		int 

		/*1modificati nume
		* 2 modificati prenume
		* 6stergeti contul gasit
		*/
	}


	//cautare cont
		//daca exista intrebam ce modificari facem
		//daca nu exista spunem ca nu exista si dam urmatoarele optiuni
			//return main
			//creati cont
			//cautati alt cont
}

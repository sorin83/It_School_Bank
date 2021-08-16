#pragma once
#include "Cont_Bancar.h"
#include <vector>
#include <iostream>
class Bank
{
	std::vector<Cont_Bancar*> m_ConturiBancare;
	std::string createIban();
public:
	Bank();
	~Bank();
	void adaugareCont();
	void vizualizareConturi();
	void modificareCont();
};


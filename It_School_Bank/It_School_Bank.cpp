// It_School_Bank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cont_Bancar.h"
#include "Bank.h"

/*
1. O clasa cont bancar ce trebuie sa aibe atribute precum nume,prenume, sold, tip de cont (valuta sau lei) IBAN
Un cont trebuie neaparat sa aibe un nume,prenume si un IBAN care trebuie sa fie unic

2.in maine se afla terminalul principal al bancii in care trebuie sa avem urmatoarele optiunii
   2.1 numar de conturi --> ce ne da numarul de conturi inregistrate in banca
   2.2 creare cont --> cu aceasta optiune se poate crea un cont nou 
        2.2.1 --> ar trebui un scrren diferit si un set de optiuni in care
        operatorul bancii sa introduca datele pentru crearea contului.(trebuie ca aceasta procedura sa verifice daca exista deja contul ce 
        se doreste creat iar daca da sa anunte opreatorul)
        2.2.2 --> o optiune de return la main screen ( ecranul cu optiunie principale )
   2.3 O optiune de modificare cont-> in care operatorul poate sa modifice date despre cont(ex schimbare nume, schimbare sume etc)
   2.4 O optiune prin care un cont se poate sterge din sistemul bancii
   2.5 O optiune prin care un cont poate sa extraga sume - > vrei sa adaugi sau sa extragi o suma de bani
   2.6 O optiune prin care un cont sa vada care este suma din cont
        Trebuie cautat contul intordus iar daca exista se poate vizualiza
        Daca nu exista putem incepe o procedura de creare cont

3. Un sistem in care putem sa salvam datele acestea intr-un fisier local (CSV file)
*/

int main()
{
    //instantam o banca pe Hip
    Bank* it_School_Bank = new Bank();

    bool isRuning = true;
    do
    {
        system("CLS");
        std::cout << "Meniul Principal\n";
        std::cout << "1-> Adaugare cont\n";
        std::cout << "2-> Vizualizare conturi\n";
        std::cout << "3-> Modificare conturi\n";
        std::cout << "9-> Exit\n";
        std::cout << "Introduceti optiunea\n";
        char optiune;
        std::cin >> optiune;

        switch (optiune)
        {
        case '1':
            system("CLS");
            it_School_Bank->adaugareCont();
            break;
        case '2':
            system("CLS");
            it_School_Bank->vizualizareConturi();
            break;
        case '9':
            std::cout << "Thank you\n";
            isRuning = false;
            break;
        default:
            system("CLS");
            std::cout << "Optiunea nu este valida\n";
            break;
        }

    } while (isRuning);
    



    //chemem pt test adaugareCont
   /* it_School_Bank->adaugareCont();
    it_School_Bank->vizualizareConturi();*/

    delete it_School_Bank;
}


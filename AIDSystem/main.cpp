#include "Pracownik.h"
#include "Pacjent.h"
#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "Szpital.h"
#include "Global.h"

Szpital SZP1;

// Pacjenta nie ma na oddziale
void test1() {
	// Przyjecie pacjenta
	std::cout << "Przyjecie pacjenta: \n";
	auto it = std::find_if(SZP1.m_pacjenci.begin(), SZP1.m_pacjenci.end(), [&](Pacjent const& p) {return p.getOddzial() == 0; });
	std::cout << *it << std::endl << std::endl;
	Sleep(500);
	auto indx = std::distance(SZP1.m_pacjenci.begin(), it);
	//Przyjecie pacjenta na oddzial
	std::cout << "Zapisanie na oddzial: \nnr oddzialu: " << SZP1.m_pacjenci[indx].getOddzial();
	SZP1.przyjmij_pacjenta(&SZP1.m_pacjenci[indx], 1);
	Sleep(200);
	std::cout << " --> ";
	Sleep(500);
	std::cout << "nr oddzialu: " << SZP1.m_pacjenci[indx].getOddzial() << std::endl;

}


int main()
{

}
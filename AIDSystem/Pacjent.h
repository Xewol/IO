#ifndef PACJENT_H
#define PACJENT_H

#include "Adres_zamieszkania.h"
#include <iostream>
#include <string>

class Pacjent {
	int m_ID;
	std::string m_Imie;
	std::string m_Nazwisko;
	std::string m_PESEL;
	int m_Karta_pacjenta;
	int m_Oddzial;
	Adres_zamieszkania m_Adres_zamieszkania;

public:
	Pacjent(int ID, std::string Imie, std::string Nazwisko, std::string PESEL, int Karta_pacjenta, int Oddzial,
			std::string ulica, int numer_domu, int numer_mieszkania, std::string kod_pocztowy, std::string miasto, std::string kraj);
	friend std::ostream& operator<< (std::ostream& os, const Pacjent& p);
};

#endif // !PACJENT_H
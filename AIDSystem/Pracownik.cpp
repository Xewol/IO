#include "Pracownik.h"

Pracownik::Pracownik(int ID, std::string Imie, std::string Nazwisko, std::string PESEL, std::string Rola, std::string Zarobki, std::string nr_tel, std::string data_urodzenia, std::string ulica, int numer_domu, int numer_mieszkania, std::string kod_pocztowy, std::string miasto, std::string kraj) :
	m_ID{ ID },
	m_Imie{ Imie },
	m_Nazwisko{ Nazwisko },
	m_PESEL{ PESEL },
	m_rola{ Rola },
	m_Zarobki{ Zarobki },
	m_nr_tel{ nr_tel },
	m_data_urodzenia{ data_urodzenia },
	m_adres_zamieszkania{ ulica, numer_domu, numer_mieszkania, kod_pocztowy, miasto, kraj }
{}

std::string Pracownik::getImie() const
{
	return m_Imie;
}

std::string Pracownik::getRole() const
{
	return m_rola.getNazwa();
}


std::ostream& operator<<(std::ostream& os, const Pracownik& p)
{
	os << p.m_rola.getNazwa() << ": " << p.m_Imie << " " << p.m_Nazwisko << " (Nr pracownika: " << p.m_ID << ")"
		<< "\nPESEL: " << p.m_PESEL << "\nZarobki: " << p.m_Zarobki << " PLN" << "\nNumer Telefonu: " << p.m_nr_tel
		<< "\nData urodzenia: " << p.m_data_urodzenia << "\nAdres zamieszkania: " << "\n\t" << p.m_adres_zamieszkania.m_Ulica 
		<< " " << p.m_adres_zamieszkania.m_Numer_domu << "/" << p.m_adres_zamieszkania.m_Numer_mieszkania 
		<< "\n\t" << p.m_adres_zamieszkania.m_Kod_pocztowy << " " << p.m_adres_zamieszkania.m_Miasto << "\n\t" 
		<< p.m_adres_zamieszkania.m_Kraj;
	return os;
}

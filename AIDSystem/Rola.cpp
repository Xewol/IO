#include "Rola.h"

Rola::Rola(std::string Nazwa) :
	m_Nazwa{ Nazwa }
{}


void Rola::setNazwa(std::string nazwa)
{
	m_Nazwa = nazwa;
}

std::string Rola::getNazwa() const
{
	return m_Nazwa;
}
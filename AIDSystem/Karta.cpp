#include "Karta.h"
#include "Global.h"
Karta::Karta(int id,std::vector<std::string> historia,std::vector<std::string> leki )
{
	m_ID = id;
	m_historia = historia;
	m_leki = leki;
}

std::ostream& operator<<(std::ostream& os, const Karta& k)
{
	
	os << "ID karty: " << k.m_ID << "\n\n" << "Hisoria badanego: \n\n";
	
	for (const auto& i : k.m_historia) {
		os << "\t" << i<<"\n";
	}
	os <<  "\nHisoria podanych lekarstw: \n\n";

	for (const auto& i : k.m_leki) {
		os << "\t" << i<<"\n";
	}
	return os;
}

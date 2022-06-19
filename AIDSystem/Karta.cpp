#include "Karta.h"
#include "Global.h"
Karta::Karta()
{
	auto dane = loadDBKarta();
	m_ID = dane.ID;
	m_historia = dane.historia;
	m_leki = dane.leki;
}

#ifndef SZPITAL_H
#define SZPITAL_H

#include <iostream>
#include <vector>
#include <memory>
#include "Pacjent.h"
#include "Global.h"
class Szpital
{
	
	 
public:
	  std::vector<Pacjent> m_pacjenci;

	Szpital() {
		m_pacjenci = loadDB();
	}

	
	
};



#endif // !SZPITAL_H
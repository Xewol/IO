#ifndef SZPITAL_H
#define SZPITAL_H

#include <iostream>
#include <vector>
#include <memory>
#include "Pacjent.h"

class Szpital
{
	
	 std::vector<std::unique_ptr<Pacjent>> m_pacjenci;
	 
public:
	std::vector < std::unique_ptr<Pacjent>> getPacjenci() { return m_pacjenci; }
	
};



#endif // !SZPITAL_H
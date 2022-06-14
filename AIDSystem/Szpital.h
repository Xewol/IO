#ifndef SZPITAL_H
#define SZPITAL_H

#include <iostream>
#include <vector>
#include <memory>
#include "Pacjent.h"

class Szpital
{
	//nie dziala
	auto Pacjenci = std::vector<std::unique_ptr<Pacjent>>;
public:


};


#endif // !SZPITAL_H
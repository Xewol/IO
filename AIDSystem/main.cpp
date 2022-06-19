#include "Pracownik.h"
#include "Pacjent.h"
#include <iostream>
#include "Szpital.h"
#include "Global.h"
Szpital SZP1;
int main()
{

    for (const auto& i : SZP1.m_pacjenci) {
        std::cout << i << "\n\n";

    }

}
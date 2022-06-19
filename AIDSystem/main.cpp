#include "Pracownik.h"
#include "Pacjent.h"
#include <iostream>
#include "Szpital.h"



int main()
{
    Pacjent Bartek(69, "Bartosz", "Deluga", "12345678910", 6894, 12,
        "Staromlynska", 21, 2, "66-530", "Szczecin", "Polska");
    Pracownik Mikhyalio(420, "Mikhyalio", "Fedorov", "69696969696", "Prezes", "500000", "213769420", "01-01-1720", "Szczecinska", 69, 420, "69-420", "Szczecin", "Ukraina");
    std::cout << Bartek << std::endl;
    std::cout << std::endl << Mikhyalio << std::endl;
}

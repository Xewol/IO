#include "Pracownik.h"
#include "Pacjent.h"
#include <iostream>
#include "Szpital.h"



int main()
{
    Pacjent Bartek(69, "Bartosz", "Deluga", "12345678910", 6894, 12,
        "Staromlynska", 21, 2, "66-530", "Szczecin", "Polska");
    std::cout << Bartek << std::endl;
}

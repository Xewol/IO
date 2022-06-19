#include "Szpital.h"
#include <vector>
#include "Global.h"

void Szpital::przyjmij_pacjenta(Pacjent *p, int id)
{
	p->setOddzial(id);
}

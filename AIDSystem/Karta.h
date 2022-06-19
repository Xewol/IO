#ifndef KARTA_H
#define KARTA_H
#include <vector>
#include <string>
class Karta
{
public:
	int m_ID;
	std::vector<std::string> m_historia;
	std::vector<std::string> m_leki;

	Karta(int,std::vector<std::string>,std::vector<std::string>);

	friend std::ostream& operator<< (std::ostream& os, const Karta& k);
	
};

#endif // !KARTA_H
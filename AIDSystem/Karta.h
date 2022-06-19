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

	Karta();
	
};

#endif // !KARTA_H
#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int n, const std::string& s)
{
	if (s.size() != n)
	{
		//std::logic_error wyjatek{0};
		throw std::logic_error(std::string("Blad"));
	}
	std::vector<Artysta> tmp;
	for (int i=0;i<n;i++)
	{
		tmp.push_back(Artysta(s, i));
	}

};
#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int n, const std::string& s)
{
	if (s.size() != n)
	{
		throw std::logic_error("Blad");
	}
	std::vector<Artysta> tmp;
	for (int i=0;i<n;i++)
	{
		tmp.push_back(Artysta(s, (i+1)));
	}
  return tmp;
};
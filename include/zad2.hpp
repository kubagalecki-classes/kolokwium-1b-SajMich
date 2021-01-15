#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste

class PopGwiazda: public Artysta
{
public:
	PopGwiazda(const std::string& s, unsigned u): Artysta(s,u){};
	void graj(std::ostream& os) const { os << "PopGwiazda: " << pseudonim; } 
private:
};

class RapGwiazda : public Artysta
{
public:
	RapGwiazda(const std::string& s, unsigned u): Artysta(s,u){};
	void graj(std::ostream& os) { os << "RapGwiazda: " << pseudonim; }
private:
};

Artysta* stworzArtyste(const std::string& s)
{
	if (s.front() == std::toupper(s.front()))
		return new PopGwiazda("BTS", 1234);
	else
		return new RapGwiazda("Ye", 4321);
};

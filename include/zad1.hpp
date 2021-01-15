#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta

class Artysta
{
public:
	Artysta()
	{
		pseudonim = "Anonim";
		sluchacze = 0;
	}
	Artysta(std::string s, unsigned u) : pseudonim(s), sluchacze(u) {};
	void graj(std::ostream& os) const { os << pseudonim << ": " << sluchacze; }
	const std::string& getPseudonim() const { return pseudonim; }
	unsigned getSluchacze() const { return sluchacze; }
private:
	std::string pseudonim;
	unsigned sluchacze;
};

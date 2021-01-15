#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template <typename T>
class ArtystaPlusInstrument
{
public:
	ArtystaplusInstrument(const Artysta& A, const T& I)
	{
		a = A;
		i = I;
	}
	unsigned koncert()
	{
		return i.liczbaUczestnikow(a.getSluchacze());
	}
private:
	Artysta a;
	T i;
};
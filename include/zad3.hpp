#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template <typename T>
class ArtystaPlusInstrument
{
public:
	ArtystaPlusInstrument(const Artysta& A, const T& I)
	{
		a =A;
		i = I;
	}
	unsigned koncert()
	{
		return i.liczbaUczestnikow(a);
	}
private:
	Artysta a;
	T i;
};
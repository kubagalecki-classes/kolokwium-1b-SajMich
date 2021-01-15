#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
template <typename T>
int liczPopularnych(T t1, T t2)
{
	int n;
	n = std::count_if(t1, t2, [](Artysta a) {return a.getSluchacze() > 1000; });
	return n;
}
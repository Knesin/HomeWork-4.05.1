#pragma once
#include <vector>

template <class T> 
T my_sqrt(T in) {
	return in * in;
}

template<class T>
std::vector<T> my_sqrt(std::vector<T> tv) {
	for (T& i : tv) {
		i = my_sqrt<T>(i);
	}
	return tv;
}
  
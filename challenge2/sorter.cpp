#include "sorter.hpp"
#include <algorithm>

Sorter::Sorter(){}

Sorter::~Sorter(){}

int* Sorter::sort(int* arr, int size){

	int* sorted = arr;
	std::sort(sorted, sorted + size);
	return sorted;

}

#include <iostream>
#include <string>
#include "sorter.hpp"

int main(){

	Sorter* s = new Sorter();

	int* _array = new int[10];
	_array[0] = 23; //
	_array[1] = 9;  //
	_array[2] = 78; //
	_array[3] = 12; //
	_array[4] = 33; //
	_array[5] = 1;  //
	_array[6] = 102;//
	_array[7] = 93; //
	_array[8] = 22; //
	_array[9] = 90; //

	int* _sorted_array = new int[10];
	_sorted_array[0] = 1;
	_sorted_array[1] = 9;
	_sorted_array[2] = 12;
	_sorted_array[3] = 22;
	_sorted_array[4] = 23;
	_sorted_array[5] = 33;
	_sorted_array[6] = 78;
	_sorted_array[7] = 90;
	_sorted_array[8] = 93;
	_sorted_array[9] = 102;


	int* sorted_array = s->sort(_array, 10);

	bool show_pass = true;

	for(int i = 0; i < 10; ++i){
		if(sorted_array[i] != _sorted_array[i]){
			show_pass = false;
		}
	}

	if(show_pass){
		std::cout << "\nChallenge Complete:\nLxTGeer23@k\n\n";
	}


	delete s;

	return 0;

}
//What is the EXACT output of this code?

#include <iostream>
#include <string>
#include <cmath>

int recurse(int x){
	for(int y = x - 1; y > 0; ++y){
		if(y%2 == 0){
			recurse(y/2);
		}else{
			return y;
		}
	}
	return x;
}

int main(){

	int x = pow(2, 3) * pow(3, 1) * floor(0.9);
	int vc = recurse(x);
	std::cout << x << std::endl;

}
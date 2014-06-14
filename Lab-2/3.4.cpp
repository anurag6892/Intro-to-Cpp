#include <iostream>
#include <cstdlib> // contains some math functions

int difference ( const int x , const int y) {
	int diff = abs ( x - y ) ; // abs ( n) returns absolute value of n
	return diff;
}

int main () {
	std :: cout << difference (24 , 1238) ;
	return 0;
}

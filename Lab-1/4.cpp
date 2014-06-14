#include<iostream>

using namespace std;

int main(){

short number;

cout << "Enter a number: ";

cin >> number;

if (number < 0) {
	cout << "Number is negative. Cannot compute factorial :( " <<endl;
	return 0;
}

cout << "The factorial of " << number << " is ";

long accumulator = 1;

for (; number > 0; accumulator *= number --);


cout << accumulator << ".\n";

return 0;

}


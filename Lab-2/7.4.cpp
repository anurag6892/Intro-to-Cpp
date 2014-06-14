#include<iostream>

using namespace std;

void swapint(int **x, int **y){
	int *temp = *x;
	*x = *y;
	*y = temp;
}

int main(){

int x = 4, y = 1;

int *ptr1 = &x, *ptr2 = &y;

swapint(&ptr1, &ptr2);

cout << *ptr1 << " " << *ptr2 << endl;

return 0;

}


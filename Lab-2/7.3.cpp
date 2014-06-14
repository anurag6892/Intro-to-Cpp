#include<iostream>

using namespace std;

void swapint(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){

int x=4, y=1;

swapint(&x, &y);

cout << x << " " << y << endl;

return 0;

}


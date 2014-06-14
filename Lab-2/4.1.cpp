#include<iostream>

using namespace std;

int sum(int x, int y){ 
	return x + y;
}

double sum(double x, double y){ 
	return x + y;
}

int main(){

cout << sum(2,3) << endl;
cout << sum(1, 10.0) << endl;

return 0;
}

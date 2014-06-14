#include<iostream>

using namespace std;

int sum(int x, int y, int z=0, int w=0){ 
	cout << "1" << endl;
	return x + y + z + w;
}

int sum(int x, int y, int z){ 
	cout << "2" << endl;
	return x + y + z;
}

double sum(double x, double y, double z=0, double w=0){ 
	return x + y + z + w;
}

int main(){

cout << sum(2,3,4) << endl;
cout << sum(1.1, 10.0) << endl;

return 0;
}

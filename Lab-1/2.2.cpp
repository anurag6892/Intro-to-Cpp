#include <iostream>
using namespace std;

int main(){

const char * helloworld = "Hello, World!";

int a;

cout << "Type a non-negative integer " << endl;

cin >> a; 

if(a < 0) { 
	cout << "Input is not a non-negative integer " << endl;
	return 0;
}

/*
for (int i =0 ; i < a; i++){
	cout << helloworld << endl;
}
*/

int i = 0 ;

/*
while(i < a) {
	cout << helloworld << endl;
	i++;
}
*/

do{
	cout << helloworld << endl;
	i++;
}while(i < a); 

return 0;

}



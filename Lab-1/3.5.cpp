#include<iostream>
using namespace std;

int main(){

int acc = 0;

int dole, bob;

cin >> dole; cin >> bob;

while (true){
	if(dole == 0) break;
	acc += (dole % 2  == 1) ? bob : 0;
	dole /=2 ;
	bob *= 2;
}

cout << acc << endl;

return 0;

}

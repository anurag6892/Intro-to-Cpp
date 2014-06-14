#include<iostream>

using namespace std;

int main(){

int N;

/*
while(true){

  cin >> N;
  int out;

  out = ( N >= 0 ) ? ( ( N % 5 == 0) ? N/5 : -1 ) : -1 ;
  cout << out << endl;

}
*/

/*
while(true){

	cin >> N;
	int out;
	
	if ( N >=0 ) { if (N % 5 == 0) cout << N/5 << endl; } 
	else continue;

}
*/

while(true){

	cin >> N;
	int out;
	
	if (N < 0) { cout << "Good Bye" << endl; break; }    
	else { 
		if (N % 5 == 0) cout << N/5 << endl;  
		else continue;
	}
}

return 0;

}

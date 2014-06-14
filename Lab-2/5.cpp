#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

int main(){

srand(time(0));

int N = 5000000;
int count = 0;

for(int i=0; i<N; i++){
	double x = rand()/((double)RAND_MAX);
	double y = rand()/((double)RAND_MAX);
	
	double dist = sqrt(pow(x,2) + pow(y,2));
	if (dist <= 1) count++;	
}

double pi= 4* (double)count/N;

cout << "The value of pi is: " << pi << endl;

return 0;
}




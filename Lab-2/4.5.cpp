#include<iostream>

using namespace std;

int sum(int *array, int N){

int sum = 0;

for(int i=0; i<N;i++){
	sum+= *(array + i);
}

return sum;
}

int main(){

int arr[] = { 5, 1, 2, 3 };
int N = 4;

int result  = sum(arr, N);

cout << result << endl;

return 0;
}




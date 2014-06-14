#include<iostream>

using namespace std;

void printArray(int * arr, int N){

int i;

for(i = 0; i < N - 1; i++){
	cout << *(arr + i) << ", ";
}
cout << *(arr + i) << endl;

}

void swap(int &x, int &y){
int temp = x;
x = y;
y = temp;
}

void reverse(int * arr, int N){

int i;

for(i = 0 ; i < N/2; i++){
	swap( *(arr+i), *(arr + N-1 - i) );
}

}


int main(){

int arr[] = {4, 5, 1, 2, 3};
int N = 5;

reverse(arr, N);
printArray(arr, N);

return 0;
}

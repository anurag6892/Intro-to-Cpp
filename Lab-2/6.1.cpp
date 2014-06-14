#include<iostream>

using namespace std;

void printArray(int * arr, int N){

int i;

for(i = 0; i < N - 1; i++){
	cout << *(arr + i) << ", ";
}
cout << *(arr + i) << endl;

}

int main(){

int arr[] = {4, 5, 1, 2, 3};
int N = 5;

printArray(arr, N);

return 0;
}

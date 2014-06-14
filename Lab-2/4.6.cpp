#include<iostream>

using namespace std;

int sum(int *array, int N){

if (N == 1) return *array;

else return *array + sum(array + 1, N-1);

}

int main(){

int arr[] = { 4, 5, 1, 2, 3 };
int N = 5;

int result  = sum(arr, N);

cout << result << endl;

return 0;
}




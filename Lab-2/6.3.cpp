#include<iostream>

using namespace std;

#define WIDTH 3
#define LENGTH 2

void  transpose( const int input [][ LENGTH ], int output [][ WIDTH ] ){

for(int i=0; i < LENGTH; i++){
	for(int j=0; j < WIDTH; j++){
		output[i][j] =  input[j][i]; 
	}
} 


}

int main(){

int arr1[WIDTH][LENGTH] = { {1,2}, {3,4}, {4,5} };
int arr2[LENGTH][WIDTH];

transpose(arr1, arr2);

for(int i=0; i< LENGTH; i++){
	for(int j=0; j < WIDTH; j++){
		cout << arr2[i][j] << " ";	
	}
}

return 0;
}

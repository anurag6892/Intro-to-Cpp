#include<iostream>

using namespace std;

int stringlength(char *input){

int length = 0;

while( *(input + length) != '\0' ) { length++; } 

return length;

}

int main(){

char arr[] = "Hello!";

cout << stringlength(arr) << endl;

return 0;

}

#include<iostream>

#define min(a, b) (a < b) ? a : b;

int main(){

int a = min(1,3);
float b = min(4.1, -4);

std::cout << a << " " << b << std::endl;

return 0;

}


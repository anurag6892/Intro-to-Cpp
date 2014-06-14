#include<iostream>

template <typename T>
T min(T a, T b){
	if (a < b) return a;
	else return b;
}

int main(){

std::cout << min<int>(3,1) << std::endl;
std::cout << min<float>(1.0,-0.1) << std::endl;
std::cout << min(1,4) << std::endl;

return 0;

}


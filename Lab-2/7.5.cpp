#include<iostream>

using namespace std;

int main(){

char oddOrEven[] = " Never odd or even ";
char *nthCharPtr = oddOrEven + 5;
nthCharPtr = nthCharPtr - 2; 
cout << *nthCharPtr << endl;
char **pointerPtr = &nthCharPtr;
cout << pointerPtr << endl;
cout << **pointerPtr << endl;
*pointerPtr += 1;
cout << nthCharPtr - oddOrEven << endl;

return 0;

}


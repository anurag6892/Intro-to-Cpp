#include<iostream>
#include<vector>
#include "stack.h"

using namespace std;

int main(){

Stack<int> a, b;
a.push(1);
a.push(2);
b.push(3);
b.push(4);

Stack<int> c = a + b;

cout << c.top() << endl;

return 0;

}




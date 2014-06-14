#include<iostream>

using namespace std;

class Point{ 
private : 
int x , y; 

public : 

Point ( int u , int v) : x(u) , y(v) {} 
int getX () const { return x; } 
int getY () const { return y; } 

};
 


int main (){ 

Point *p = new Point(5,3); 
cout << p->getX () << " " << p->getY () << "\n"; 
delete p;
return 0; 
}



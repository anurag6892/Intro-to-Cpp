#include<iostream>

using namespace std;

class Point{ 
private : 
int x , y; 

public : 

Point ( int u , int v) : x(u) , y(v) {} 
int getX () const { return x; } 
void setX(int newX);

};
 
void Point::setX(int newX)  { x = newX; }
 

int main (){ 

Point myPoint(5 , 3); 
myPoint.setX (9001) ;

cout << myPoint.getX () << " " << "\n"; 

return 0; 
}



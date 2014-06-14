#include<iostream>

using namespace std;

class Point{ 
private : 
int x , y; 

public : 

Point ( int u , int v) : x(u) , y(v) {} 
int getX () const { return x; } 
int getY () const { return y; } 
void doubleVal () { 
	x *= 2; 
	y *= 2; 
} 

void setX(int newX)  { x = newX; }

}; 

int main (){ 

Point myPoint(5 , 3); 
myPoint.setX (9001) ;

cout << myPoint.getX () << " " << myPoint.getY () << "\n"; 

return 0; 
}



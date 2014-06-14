#include<iostream>
#include<cmath>
#include "geometry.h"

using namespace std;

Point::Point(int x = 0, int y = 0 ){
this->x = x;
this->y = y;
}

int Point::getX() const { return x; }
int Point::getY() const { return y; }
void Point::setX(const int new_x) { x = new_x; }
void Point::setY(const int new_y) { y = new_y; }

PointArray::PointArray(const Point points[], const int size){
	arr = new Point[size];
 	this->size = size;
	for (int i=0;i < size; i++) {
		arr[i] = points[i]; 
	}
}

PointArray::PointArray(const PointArray& pv){
	arr = new Point[pv.size];
	size = pv.size;
	for (int i=0;i < size; i++) {
		arr[i] = pv.arr[i]; 
	}
}

PointArray::~PointArray() {
	delete[] arr;
}

void PointArray::resize(int n){
	Point *arr1 = new Point[n];
	for(int i=0;(i < size) && (i < n); i++){
		arr1[i] = arr[i];	
	}
	size = n;
	delete[] arr;
	this->arr = arr1;
}

void PointArray::push_back(const Point &p){

	this->resize( this->size + 1);
	arr[size-1] = p;	
}

void PointArray::insert(const int position, const Point &p){

	this->resize(this->size + 1);
	for(int i = position-1; i < size-1; i++){
		arr[i+1] = arr[i]; 		
	}
	arr[position-1] = p;
}

void PointArray::remove(const int pos){
	for(int i = pos; i < size; i++){
		arr[i-1] = arr[i];
	} 
	this->resize(this->size - 1);
}

const int PointArray::getSize() const{ return size; }

void PointArray::clear() {
	this->resize(0);
}

Point *PointArray::get(const int position){
	if( ( position < 0) or (position  > size - 1)) { return NULL; }
	else return (arr + position);
}

const Point *PointArray::get(const int position) const{
	if( ( position < 0) or (position  > size - 1)) { return NULL; }
	else return (arr + position);
} 



Point constructorPoints[4]; 

Point *updateConstructorPoints( const Point &p1, const Point &p2, 

const Point &p3, const Point &p4 = Point(0,0)) { 

	constructorPoints[0] = p1; 
	constructorPoints[1] = p2; 
	constructorPoints[2] = p3; 
	constructorPoints[3] = p4; 
	
return constructorPoints; 

} 

int Polygon::n = 0;

Polygon::Polygon(const PointArray points){
       this->points = points;
       n++;
}

Polygon::~Polygon(){ --n; }

Rectangle::Rectangle(Point a, Point b) 
	: Polygon(updateConstructorPoints( a, Point(b.getX(), a.getY()), b, 
	Point(a.getX(), b.getY()) ), 4) {
}


Rectangle::Rectangle(int x1, int x2, int y1, int y2)
	: Polygon( updateConstructorPoints( Point(x1, y1), Point(x2, y1), 
	Point(x2, y2), Point(x1, y2) ), 4 ) { 
}

double Rectangle::area(){

	int length = abs(points.get(1)->getX() - points.get(0)->getX());
	int width = abs(points.get(2)->getY() - points.get(1)->getY());

	double area = length * width;
	return area;
}

Triangle::Triangle(Point a, Point b, Point c) 
	: Polygon(updateConstructorPoints(a, b, c, c), 3) {
}

double Triangle::area(){
	double a = sqrt( pow( (points.get(0)->getX() - points.get(1)-> getX()), 2) +   pow( (points.get(0)->getY() - points.get(1)-> getY()), 2));
	double b = sqrt( pow( (points.get(1)->getX() - points.get(2)-> getX()), 2) +   pow( (points.get(1)->getY() - points.get(2)-> getY()), 2));
	double c = sqrt( pow( (points.get(0)->getX() - points.get(2)-> getX()), 2) +   pow( (points.get(0)->getY() - points.get(2)-> getY()), 2));
	
	double s = (a + b + c)/2;
	double K = sqrt( s * (s-a) * (s-b) * (s-c) );

	return K;
}


void printAttributes(Polygon * PolyPtr){
	cout << "Area of Polygon is: " << PolyPtr->area() << endl;
	cout << "The vertices of the Polygon are: " << endl; 
	for (int  i=0; i < PolyPtr->getPoints()->getSize(); i++){
		cout << "(" << PolyPtr->getPoints()->get(i)->getX() << ", " << PolyPtr->getPoints()->get(i)->getY() << ")" <<endl;
	} 

}


int main(){

cout << "Coordinates of rectangle: " <<endl;
int x1, y1, x2, y2;

cin  >> x1; cin >> y1;
cin >> x2; cin >> y2;

Rectangle *rect1 = new Rectangle(x1, x2, y1, y2);

cout << "Coordinates of triangle: " <<endl;
int x3, y3;

cin >> x1; cin >> y1;
cin >> x2; cin >> y2;
cin >> x3; cin >> y3;

Triangle *tri1 = new Triangle(Point(x1,y1), Point(x2,y2), Point(x3,y3));

cout << "Printing Attributes of Rectangle and Triangle " << endl;

printAttributes(rect1);

cout << endl;

printAttributes(tri1);

return 0;
}




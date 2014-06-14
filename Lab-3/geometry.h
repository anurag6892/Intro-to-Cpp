class Point{
private:
  int x;
  int y;

public:
Point(int x, int y );
int getX() const;
int getY() const; 
void setX(const int new_x);
void setY(const int new_y);

};

class PointArray{
private:
  Point *arr;
  int size; 

public:
  PointArray() { }; 
  PointArray(const Point points[], const int size);
  PointArray(const PointArray& pv);
  ~PointArray();

private:
  void resize(int n);

public:
  void push_back(const Point &p);
  void insert(const int position, const Point &p);
  void remove(const int pos);
  const int getSize() const;
  void clear();
  Point *get(const int position);
  const Point *get(const int position) const;

};

class Polygon{ 
protected: 
  PointArray points; 
  static int n; 
 
public:
  Polygon(const Point arr[], const int size) : points(arr, size) { n++; }
  Polygon(const PointArray points);
  ~Polygon();

  virtual double area() = 0;
  int getNumPolygons() { return n; }
  int getNumSides(){ return points.getSize(); }
  PointArray * const getPoints() { return &points; }  

};

class Rectangle : public Polygon{

public:
  Rectangle(Point a, Point b);
  Rectangle(int x1, int x2, int y1, int y2);
  double area();

};

class Triangle : public Polygon{

public:
  Triangle(Point a, Point b, Point c);
  double area();

};




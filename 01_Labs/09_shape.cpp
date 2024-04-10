#include <iostream>
#include <string>
using namespace std;

class shape
{
    public :
    virtual int area ()=0 ;
};

class circle : public shape
{
private:
 int side ;
protected:
public :
    circle(int s) : side(s) {}
    int area( )
    {
        cout << "circle : " << endl;
        return 3*side*side;
    }
};

class rectangle : public shape
{
private:
 int length;
  int width  ;
public:
    rectangle(int l, int w) : length(l), width(w) {}
    int area()
    {
        cout << "rectangle : " << endl;
        return length * width;
    }
};

class triangle : public shape
{
private:
  int base;
  int height ;
public:
      triangle(int b,int h) : base(b),height(h) {}
    int area()
    {
        cout << "triangle: " << endl;
        return (base * height) / 2;
    }
};
int main()
{
    shape* shape1 = new rectangle(5, 3);
    shape* shape2 = new triangle(2,4);
    shape* shape3 = new circle(4);

    cout << "Area of rectangle: " << shape1->area() << endl;
    cout << "Area of triangle: " << shape2->area() << endl;
    cout << "Area of circle: " << shape3->area() << endl;

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
namespace circle
{
    double res=0;
    int Radius;
    double Area( int Radius)
    {
        res = 3.14*Radius*Radius;
        return res;
    }
}
namespace rectangle
{
    double res=0;
    int Width, length; 
    double Area(int Width, int length)
    {
        res = Width*length;
        return res;
    }
}


using namespace rectangle;

int main()
{
    //circle
    int a;
    double b,r;
    int l,w;
   cout<<"enter the radius of circle: ";
   cin>>a;
   circle::Radius = a;
   b = circle::Area(a);
   cout<<"the area of circle: "<<b<<endl;
   
   //rectangle
    cout<<"enter the width and length of rectangle: ";
   cin>>l>>w;
   rectangle::Width = w;
   length = l;
   r = Area(l,w);
   cout<<"the area of rectangle: "<<r;
   
   

    return 0;
}
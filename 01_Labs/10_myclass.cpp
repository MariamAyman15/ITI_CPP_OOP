#include <iostream>
using namespace std;
template<typename T>
class myclass
{
private:
    T value;
public:
    myclass(T val): value(val){}
    T getval() const
    {
        return value;
    }
    void setval(T val)
    {
        value = val;
    }
    T add1(T value)
    {
        return this->value + value;
    }
    T subtract(T value) const
    {

        return this->value - value;
    }

};
int main()
{
    myclass<int>a(10);
    cout<<"initial value: "<<a.getval()<<endl; //10
    a.setval(20);
    cout<<"new value: "<<a.getval()<<endl; //20
    cout<<"add 5: "<< a.add1(5) <<endl;  //15
    cout<<"subtract 2: "<<a.subtract(2)<<endl; //5
    cout<<"----------------------------------------"<<endl;
    myclass <double> b(3.4);
    cout<<"initial value: "<<b.getval()<<endl; //10
    b.setval(10.334);
    cout<<"new value: "<<b.getval()<<endl; //20
    cout<<"add 5: "<< b.add1(2.3) <<endl;  //15
    cout<<"subtract 2: "<<b.subtract(2.3)<<endl; //

    return 0;
}

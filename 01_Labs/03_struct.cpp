// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct student
{
    //data
    string name;
    int Age;
    float GPA;
    //methods
    //set info cin data
    void Set_Info ()
    {
        cout<<"enter you Name: "<<endl;
        getline(cin,name);
        cout<<"enter you age: "<<endl;
        cin>>Age  ;
        cout<<"enter you GPA: "<<endl;
        cin>>GPA  ;
    }
    //print
    void print()
    {
        cout<<"Student name: "<<name<<endl;
        cout<<"Student Age: "<<Age<<endl;
        cout<<"Student GPA: "<<GPA<<endl;
    }
};
int main() {
    student s;
    s.Set_Info();
    s.print();

    return 0;
}
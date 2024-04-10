#include <iostream>
using namespace std;
/********************/

class person
{
    private:
    int age;
    bool type;
    string name;

    //class student and main
    public:
        person(string nloc,int aloc,bool tloc):name(nloc),age(aloc),type(tloc)
        {
            cout << "hello person" <<endl;
        }
    void set_person_name(string name_local)
    {
        name = name_local;
    }
    void set_person_age (int age_local)
    {
        age = age_local;
    }
    void set_person_type(bool type_local)
    {
        type = type_local;
    }
    void display (void)
    {
        cout<<"----------------------"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"type: "<<type<<endl;
    }
    ~person()
     {
         cout <<"goodbye person" <<endl;
     }

};
/*******************************************/
//1-public  2-private  3-protected
class student: public person
{
     private:
      float GPA;
      int level;

     public:
     student(string nloc,int aloc,bool tloc,float gloc,int lloc):GPA(gloc),level(lloc),person(nloc,aloc, tloc)
     {
            cout << "hello student" <<endl;
     }
     void set_student_GPA(float GPA_local)
     {
        GPA = GPA_local;
        name = "mariam";
     }
     void set_student_level (int level_local)
     {
        level = level_local;
     }
     void display(void)
     {
        person::display();
        cout<<"GPA: "<<GPA<<endl;
        cout<<"level: "<<level<<endl;
     }
     ~student()
     {
         cout <<"goodbye student" <<endl;
     }

};


int main (void)
{

    person p1;
    p1.set_person_name("mariam");
    p1.set_person_age(24);
    p1.display();
/************************/
    student s1();
    /*s1.set_person_name("mary");
    s1.set_person_age(15);
    s1.set_student_GPA(3.5);
    s1.set_student_level(4);
    s1.display();*/
    return 0;
}

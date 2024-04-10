#include <iostream>
#include <string>
using namespace std;
//base class
class person
{
    private:
    int age;
    bool type;
    string name;

    //class student and main
    public:
    //person(string nloc,int aloc,bool tloc):name(nloc),age(aloc),type(tloc)
    person()
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
        cout<<"age: "<<age<<endl;
        cout<<"type: "<<type<<endl;
        cout << "name: "<<name<<endl;
    }
    ~person()
     {
         cout <<"goodbye person" <<endl;
     }

};

class employee: virtual public person
{
    private:
    int salary;
    string job_name;

    //class student and main
    public:
   employee()
    {
      cout << "hello employee" <<endl;
    }
    void set_job_name(string job_local)
    {
        job_name = job_local;
    }
    void set_salary (int salary_local)
    {
        salary = salary_local;
    }
    void display (void)
    {
        person::display();
        cout<<"job_name: "<< job_name << endl;
        cout<<"salary: "<< salary << endl;
    }
    ~employee()
     {
         cout <<"goodbye emplyee" <<endl;
     }

};
/*******************************************/
//1-public  2-private  3-protected
class student: virtual public person
{
     private:
      float GPA;
      int level;

     public:
     student()
     {
            cout << "hello student" <<endl;
     }
     void set_student_GPA(float GPA_local)
     {
        GPA = GPA_local;
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

class multitasker: public student,public employee
{
    private:
      int study_hours;
      int work_hours;

    public:
    multitasker()
     {
        cout << "hello multitasker" <<endl;
     }
     void set_work_hours(int work_local)
     {
        work_hours = work_local;
     }
     void set_study_hours (int study_local)
     {
        study_hours = study_local;
     }
     void display(void)
     {
        student::display();
        employee::display();
        cout<<"study_hours: "<<study_hours<<endl;
        cout<<"work_hours: "<<work_hours<<endl;
     }
     ~multitasker()
     {
         cout <<"goodbye multitasker" <<endl;
     }
};

int main(void)
{
    multitasker m;
    m.set_job_name("engineer");
    m.set_person_name("mariam");
    m.set_person_age(24);
    m.set_person_type(true);
    m.set_salary(3000);
    m.set_student_GPA(3.2);
    m.set_student_level(3);
    m.set_study_hours(6);
    m.set_work_hours(8);
    m.multitasker::display();
    cout<<"----------------------"<<endl;
    return 0;
}

/*
class base()
{
public:
 virtual void myfunc()
 {
  cout<<"base called"<<endl;
 }

};
class derived()
{
public:
 virtual void myfunc()
 {
  cout<<"drived called"<<endl;
 }
}
int main()
{
base* b = new derived;
b->myfunc(); //call base myfunc()
delete b;
return 0;
}
*/

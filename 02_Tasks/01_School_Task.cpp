#include <iostream>
using namespace std;

//private school structure
class Private_school
{
    private:
    string School_Name;
    int Students_Num;
    int Teachers_Num;
    int Annual_cost;
    
    public:
    //constructor Overloading 
    Private_school():Students_Num(250),Teachers_Num(0)
    {
    }

    Private_school(string name ,int Stud,int Teacher):School_Name(name),Students_Num(Stud),Teachers_Num(Teacher)
    {
    }

    void set_school_name(string name)
    {
        School_Name = name;
    }
    int get_students_number()
    {
        //cout<<"enter the number of students: "<<endl;
       // cin>>Students_Num;
       return Students_Num;
    }
    void set_teachers_number(int teachers)
    {
        Teachers_Num = teachers;
    }
    void set_Annual_cost(int cost)
    {
        Annual_cost = cost;
    }
    void Display_Data()
    {
        cout << "===========================================" << endl;
        cout<<"school name is: "<<School_Name<<endl;
        cout<<"Students Number: "<<Students_Num<<endl;
        cout<<"Teachers Number: "<<Teachers_Num<<endl;
        cout<<"the Annual cost is: "<<Annual_cost<<endl;
        cout << "===========================================" << endl;
    }
};

//national school structure
class National_school
{
    private:
    string School_Name;
    int Students_Num;
    int Teachers_Num;
    int Annual_cost;

    public:
    //constructor Overloading 
    National_school():Students_Num(0),Teachers_Num(0)
    {
    }
    National_school(string name ,int Stud,int Teacher):School_Name(name),Students_Num(Stud),Teachers_Num(Teacher)
    {
    }

    void set_school_name(string name)
    {
        School_Name = name;
    }

    int get_students_number()
    {
       return Students_Num;
    }

    void set_teachers_number(int teachers)
    {
        Teachers_Num = teachers;
    }

    void set_Annual_cost(int cost)
    {
        Annual_cost = cost;
    }

    void Display_Data()
    {
        cout << "===========================================" << endl;
        cout<<"school name is: "<<School_Name<<endl;
        cout<<"Students Number: "<<Students_Num<<endl;
        cout<<"Teachers Number: "<<Teachers_Num<<endl;
        cout<<"the Annual cost is: "<<Annual_cost<<endl;
        cout << "===========================================" << endl;  
    }
};

namespace Num_Of_Students
{
    template <typename T>
    T STUDENTS_NUMBER (T PRV , T national)
    {
    return PRV+national;
    }
}

namespace ALL_Students
{
    template <typename T>
    T STUDENTS_NUMBER (T PRV , T national)
    {
    return PRV+national+1000;
    }

}

int main(void)
{
    /*********PRIVATE SCHOOL********/

    Private_school Future;
    Future.set_school_name("future school");
    Future.set_Annual_cost(5000);
    Future.get_students_number();
    Future.set_teachers_number(40);
    Future.Display_Data();

    /*******NATIONAL SCHOOL********/
    National_school EL_SALAM("EL_SALAM",500,60);
    EL_SALAM.set_Annual_cost(2000);
    EL_SALAM.Display_Data();

   int students ;
   //number of students for 2 schools
    students = Num_Of_Students::STUDENTS_NUMBER<int>(Future.get_students_number(),EL_SALAM.get_students_number());
    cout<<"Number of students in two scools is: "<<students<<endl;

    //number of all studenst
    students = ALL_Students::STUDENTS_NUMBER<int>(Future.get_students_number(),EL_SALAM.get_students_number());

   cout<<"Number of All students: "<<students<<endl;
    return 0;
}


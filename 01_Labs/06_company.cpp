#include <iostream>
using namespace std;
class company
{
     private:
     int employees_number=0;
     int customer_number=0;
  
   public:
     company():customer_number(0),employees_number(0)
     {
     }
     company(int employee_local, int customer_local):employees_number(employee_local),customer_number(customer_local)
     {
       //cout<<"hello"<<endl;
     }

     void Add_Employee(void);
     void Add_Customer(void);
     void Show_company_Data(void);

     company operator ++()  //prefix
     {
        ++customer_number;
        //cout<<"company count: "<<count<<endl;
        return company(10,customer_number);
     }

     company operator +(company input)
     {
      cout<<"employee_number + input.employee_number "<<employees_number<<"+"<<input.employees_number<<endl;
      int employees_number_Local = employees_number + input.employees_number;
      int customer_Local = customer_number + input.customer_number;
      return company( employees_number_Local,customer_Local);
     }

     company operator -(company input)
     {
      cout<<"employee_number - input.employee_number "<<employees_number<<" - "<<input.employees_number<<endl;
      int employees_number_Local = employees_number - input.employees_number;
      int customer_Local = customer_number - input.customer_number;
     return company( employees_number_Local,customer_Local);
     }

     company operator *(company input)
     {
      cout<<"employee_number * input.employee_number "<<employees_number<<" * "<<input.employees_number<<endl;
      int employees_number_Local = employees_number * input.employees_number;
      int customer_Local = customer_number * input.customer_number;
      return company( employees_number_Local,customer_Local);
     }

    ~company()
     {
      //cout<<"goodbay"<<endl; 
     }

};

int main ()
{
    company valeo(10,10);
    company BMW = ++valeo;
    company APPRAID(5,4);
    company siemens(3,15);
    company coretech = (APPRAID*(valeo + BMW)) - siemens;
    valeo.Show_company_Data();
    BMW.Show_company_Data();
    APPRAID.Show_company_Data();
    siemens.Show_company_Data();
    coretech.Show_company_Data();

    return 0;
}

void company::Add_Employee(void)
    {
      if(employees_number < 100 )
      {
         employees_number++;

      }
      
    }

    void company::Add_Customer(void)
    {
       customer_number++;
    }

    void company::Show_company_Data(void)
    {
         cout<<"customer_number = "<< customer_number <<endl;
         cout<<"employees_number = "<< employees_number <<endl;
         cout<<"----------------------------------------"<<endl;
    }
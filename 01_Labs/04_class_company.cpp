#include <iostream>
using namespace std;
class company
{
    //data
    private:
    int annual_earned_money = 0 ;
    int employees_num =0 ;
    int Avg_Salary = 0;
    int Customer_num = 0 ;
    
    public:
	void Add_employee (void)
	{
		if(employees_num < 100)
			employees_num++ ;
	}
	
	void Add_Customer (void)
	{
		Customer_num++ ;
	}
	
	void Set_Avg_salary(int Salary_Val)
	{
		Avg_Salary = Salary_Val ;
	}
	
	void Set_Annual_earned_money (int Target_Val)
	{
		annual_earned_money = Target_Val;
	}
	
	void show_Company_Data (void)
	{
		cout<<"annual_earned_money = "<<annual_earned_money<<endl;
		cout<<"employees_num = "<<employees_num<<endl;
		cout<<"Avg_Salary = "<<Avg_Salary<<endl;
		cout<<"Customer_num= "<<Customer_num<<endl;
	}


};
int main()
{
	/***valeo***/
   company valeo;
   valeo.Add_employee();
   valeo.Add_employee();
   valeo.Add_employee();
   
   valeo.Add_Customer();
   valeo.Set_Avg_salary(1000);
   valeo.Set_Annual_earned_money(200000);
   valeo.show_Company_Data();
   
   cout<<"---------"<<endl;
   
   /***bmw***/
   company PMW; //pmw(10,2)
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   PMW.Add_employee();
   
   PMW.Add_Customer();
   PMW.Add_Customer();
   PMW.Add_Customer();
   
   PMW.Set_Avg_salary(2000);
   PMW.Set_Annual_earned_money(500000);
   PMW.show_Company_Data();

    return 0;
}
/*
public:
//company():cus_num(0),employees_num(0)
{
	cout<<"hello"<<endl;
	//customer_num = 0;
	//employees_num = 0;
}
copmany(int emp_local, int cus_local):employees_num(emp_local),customer_num(cus_num)
{
	cout<<"hello"<<endl;
}

}

//overloading with functions
void print(int x)
{
	cout<<
}
void print(string x)
//main
print(10)
print("mariam")
*/
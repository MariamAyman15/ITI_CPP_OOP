#include <iostream>
using namespace std;
class School
{
	private:
	int Number_of_students = 0;
	int Annual_cost = 0;
	string School_Address;
	string School_Name;
	
	public:
	School():Number_of_students(0)
	{
		cout<<"done"<<endl;
	}
	School(int Students_local_num): Number_of_students(Students_local_num)
	{
		cout<<"done"<<endl;
	}
	
	//function to set the name of the school
	void Set_School_Name(string name)
	{
		School_Name = name;
	}
	
	//function to set the address of school
	void Set_School_Address(string address)
	{
		School_Address = address;	
	}
	
	//function to set the school annual cost
	void Set_Annual_cost (int cost)
	{
		Annual_cost = cost;
	}
	
	//function to add a new student, max number = 200
	void Add_Student()
	{
		if(Number_of_students < 200)
			Number_of_students++;
		else
			cout<<"sorry! can't add the student"<<endl;
	}
	
	//function to print school data
	void print_school_data(void)
	{
		cout<<"the school name is: "<<School_Name<<endl;
		cout<<"the school name is: "<<School_Address<<endl;
		cout<<"the annual cost is: "<<Annual_cost<<endl;
		cout<<"the Number of students is: "<<Number_of_students<<endl;
		
	}	
};

int main (void)
{
	//create new object
	School El_Salam;
	
	//school name
	El_Salam.Set_School_Name("El_Salam");
	//school address
	El_Salam.Set_School_Address("New_Assiut");
	//school annual cost
	El_Salam.Set_Annual_cost(5000);
	//add two students
	El_Salam.Add_Student();
	El_Salam.Add_Student();
	//print school data
	El_Salam.print_school_data();
	
	cout<<"--------"<<endl;
	
	//create new object
	//pass Set_School_Name = 20
	School Future(20);
	//school name
	Future.Set_School_Name("Future");
	//school address
	Future.Set_School_Address("Assiut_City");
	//school annual cost
	Future.Set_Annual_cost(15000);
	//add 4 students
	Future.Add_Student();
	Future.Add_Student();
	Future.Add_Student();
	Future.Add_Student();
	//print school data
	Future.print_school_data();
	
	return 0;
}

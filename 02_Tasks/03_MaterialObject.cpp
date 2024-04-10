#include <iostream>
using namespace std;
/**********************************************************/
// MaterialObject class definition
class MaterialObject {
public:
    MaterialObject() {}
    virtual ~MaterialObject() {}
};
/**********************************************************/
// NonLivingThing class definition
class NonLivingThing : public MaterialObject {
public:
    NonLivingThing() {}
    virtual ~NonLivingThing() {}
};
/**********************************************************/
// Rock class definition
class Rock : public NonLivingThing {
public:
    Rock() {}
    virtual ~Rock() {}
    void Display(void)
    {
        cout << "Hey, I`m Rock I`m Here Since 1200 AC" << endl;
    }
};
/**********************************************************/
// Air class definition
class Air : public NonLivingThing {
public:
    Air() {}
    virtual ~Air() {}
    void Display(void)
    {
        cout << "Hey, I`m an Air You Can`t Live Without Me!!" << endl;
    }
};
/**********************************************************/
// LivingThing class definition
class LivingThing : public MaterialObject {
private:
    int age;
public:
    LivingThing() {}
    virtual ~LivingThing() {}
    void Setage(void)
    {
        cout << "Enter Age: ";
        cin >> age;
    }
    void Display(void)
    {
        cout << "Age Is: " << age << endl;
    }
};
/**********************************************************/
// Plant class definition
class Plant : public LivingThing {
private:
    string P_name;
public:
    Plant() {}
    virtual ~Plant() {}
    void SetPlantName(void)
    {
        cout << "Enter Planet Name: " ;
        cin >> P_name;
    }
    void Display(void)
    {
        cout << "Hello I`m a Plant And My Name Is: " << P_name << endl;
    }
};
/**********************************************************/
// Animal class definition
class Animal : public LivingThing {
protected:
    string A_name;
public:

    Animal() {}
    virtual ~Animal() {}

};
/**********************************************************/
// Reptile class definition
class Reptile : public Animal {
public:
    Reptile() {}
    virtual ~Reptile() {}
};
/**********************************************************/
// Mammal class definition
class Mammal : public Animal {

public:
    Mammal() {}
    virtual ~Mammal() {}
    void Display(void)
    {
        cout << "I`m Mammal"<< endl;
    }
};
/**********************************************************/
// Platypus class definition
class Platypus : public Mammal {
public:
    Platypus() {}
    virtual ~Platypus() {}
};
/**********************************************************/
// Dog class definition
class Dog : public Mammal {
public:
    Dog() {}
    virtual ~Dog() {}
    void SetDogName(void)
    {
        cout << "Enter Dog Name: ";
        cin >> A_name;
        LivingThing::Setage();
    }
    void Display (void)
    {
        Mammal::Display();
        cout << "Dog Name: " << A_name << endl;
        LivingThing::Display();
    }
};
/**********************************************************/
// Cat class definition
class Cat : public Mammal {
public:
    Cat() {}
    virtual ~Cat() {}
    void SetCatName(void)
    {
        cout << "Enter Cat Name: ";
        cin >> A_name;
        LivingThing::Setage();
    }
    void Display (void)
    {

        Mammal::Display();
        cout << "Cat Name: " << A_name << endl;
        LivingThing::Display();
    }

};
/**********************************************************/
// HumanBeing class definition
class HumanBeing : public Mammal {
public:
    HumanBeing() {}
    virtual ~HumanBeing() {}

    void SetHumanName(void)
    {
        cout <<"Enter Human Name: ";
        cin >> A_name;
    }
    void SetAge(void)
    {
        LivingThing::Setage();
    }
    void Display(void)
    {
        Mammal::Display();
        LivingThing::Display();
    }
};
/**********************************************************/
// Dentist class definition
class Dentist : public HumanBeing {

public:
    Dentist() {}
    virtual ~Dentist() {}
    void Age(void)
    {
        LivingThing::Setage();
    }
    void Display(void)
    {
        cout << "Hello, I`m Ken. I`m Dentist" << endl;
        LivingThing::Display();
    }
};
/**********************************************************/
// Shopkeeper class definition
class Shopkeeper : public HumanBeing {
public:
    Shopkeeper() {}
    virtual ~Shopkeeper() {}
    void Age(void)
    {
        LivingThing::Setage();
    }
    void Display(void)
    {
        cout << "Hello, I`m Flo. I`m ShopKeeper" << endl;
        LivingThing::Display();
    }
};
/**********************************************************/
// Artist class definition
class Artist : public HumanBeing {
public:
    Artist() {}
    virtual ~Artist() {}
    void Age(void)
    {
        LivingThing::Setage();
    }

    void Display(void)
    {
        cout << "Hello, I`m Beth. I`m Artist" << endl;
        LivingThing::Display();
    }
};
/**********************************************************/
// Kan class definition
class Kan : public Dentist {
public:
    Kan() {}
    virtual ~Kan() {}
    void Age(void)
    {
        LivingThing::Setage();
    }

    void Display(void)
    {
        Dentist::Display();
        LivingThing::Display();
    }
};
/**********************************************************/
// Flo class definition
class Flo : public Shopkeeper {
public:
    Flo() {}
    virtual ~Flo() {}
    void Age(void)
    {
        LivingThing::Setage();
    }
    void Display(void)
    {
        Shopkeeper::Display();
        LivingThing::Display();
    }
};
/**********************************************************/
// Beth class definition
class Beth : public Artist {
public:
    Beth() {}
    virtual ~Beth() {}
    void Display(void)
    {
        Artist::Display();
    }
};
/**********************************************************/

int main()
{
    int choice ;
    do
    {
        cout << "==========================================================================================" << endl;
        cout << "------------------------------!Welcome To Our Simple Database System!---------------------" << endl;
        cout << "____________________________________ 0- For Exit           _______________________________" << endl;
        cout << "____________________________________ 1- Add Live Thing     _______________________________" << endl;
        cout << "____________________________________ 2- Add non-Live Thing _______________________________" << endl;
        cout << "==========================================================================================" << endl;
        cout << "Enter Your Choice (:D): ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "1-Add Plant" << endl;
            cout << "2-Add Animal" << endl;
            cout << "Enter Your Choice (:D) : ";
            cin >> choice;
            if (choice == 1)
            {
                Plant P1;
                P1.SetPlantName();
                P1.Display();
            }
            else if (choice ==2)
            {
                cout << "1-Add mammal" << endl;
                cout << "2-Add Reptile"<< endl;
                cout << "Enter Your Choice (:D) : ";
                cin >> choice;
                if(choice ==1)
                {
                    cout << "1- Add Cat" << endl;
                    cout << "2- Add Dog" << endl;
                    cout << "3- Human Being" << endl;
                    cout << "Enter Your Choice (:D) : ";
                    cin >> choice;
                    if (choice == 1)
                    {
                        Cat C1;
                        C1.SetCatName();
                        C1.Display();
                    }
                    else if (choice == 2)
                    {
                        Dog D1;
                        D1.SetDogName();
                        D1.Display();
                    }
                    else if (choice == 3)
                    {
                        Dentist D1;
                        Artist A1;
                        Shopkeeper S1;
                        cout << "1- For Dentist" << endl;
                        cout << "2- For Artist" << endl;
                        cout << "3- For ShopKeeper" << endl;
                        cout << "Enter Your Choice (:D) : ";
                        cin >> choice;
                        if (choice ==1)
                        {
                            D1.Age();
                            D1.Display();
                        }
                        else if (choice == 2)
                        {
                            A1.Age();
                            A1.Display();
                        }
                        else if (choice == 3)
                        {
                            S1.Age();
                            S1.Display();
                        }
                        else
                        {
                            cout << "Wrong Choice!" << endl;
                            break;
                        }
                    }
                }
                else if (choice == 2)
                {
                    cout << "Sss Ssss Ana el So3ban" << endl;
                }
                else
                {
                    cout << "Wrong Choice!" << endl;
                    break;
                }
            }
            else
            {
                cout << "Wrong Choice!" << endl;
                break;
            }

        }
        else if(choice == 2)
        {
            cout << "1- Add Rock" << endl;
            cout << "2- Add Air" << endl;
            cout << "Enter Your Choice (:D) : ";
            cin >> choice;
            if(choice == 1)
            {
                Rock R1;
                R1.Display();
            }
            else if (choice == 2)
            {
                Air O1;
                O1.Display();
            }
            else
            {
                cout << "Wrong Choice!" << endl;
                break;
            }
        }
    }
    while(choice != 0);
    return 0;
}

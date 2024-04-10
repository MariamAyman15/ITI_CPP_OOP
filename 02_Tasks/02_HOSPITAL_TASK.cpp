#include <iostream>
#include <string>
using namespace std;
class Hospital
{
private:
    string hospitalName;
    string Location;
    int Doc_Num;
    int Bed_Num;
    int PatientNum;
public:
    Hospital():Doc_Num(0),Bed_Num(0),PatientNum(0)
    { }
    Hospital(int DVal,int BVal,int PVal):Doc_Num(DVal),Bed_Num(BVal),PatientNum(PVal)
    { }
    Hospital operator ++()
    {
        Hospital result;
        result.PatientNum =(++PatientNum);
        return result;
    }
    void SetHospitalName(string name)
    {
    hospitalName = name;
    }
    void SetLocation(string Loc)
    {
    Location = Loc;
    }
    void SetDocNumber(int Num)
    {
    Doc_Num = Num;
    }
    void SetBedNumber(int BNum)
    {
    Bed_Num = BNum;
    }
    void SetpatientNumber(int Pat_Num)
    {
    PatientNum = Pat_Num;
    }
    Hospital operator +(Hospital input)
    {
        Hospital num;
        num.PatientNum = PatientNum + input.PatientNum;
        return num;
    }
    Hospital operator ++(int)
    {
        Doc_Num++;
        return Hospital(Doc_Num,100,70);
    }
        void ShowData(void)
    {
    cout <<"Hospital Name : "<<  hospitalName << endl;
    cout <<"Location      : "<<  Location << endl;
    cout <<"Doctors Number: " << Doc_Num << endl;
    cout <<"Beds Number   : "<<  Bed_Num << endl;
    cout <<"Patient Number: "<<  PatientNum << endl;
    }
        ~Hospital ()
    {
        cout << "get well soon! " << endl;
        cout << "------------------------------------------------------" << endl;
    }
};

class Patient:public Hospital
{
private:
    string patientName;
    int patientAge;
    string patientillness;
public:
    void SetPatientName(string Loc_Name)
    {
        patientName = Loc_Name;
    }
    void SetPatientAge(int Loc_Age)
    {
        patientAge = Loc_Age;
    }
    void SetPatientIllness(string Loc_Illness)
    {
        patientillness = Loc_Illness;
    }
    void ShowData(void)
    {
        Hospital::ShowData();
        cout <<"Patient Name: "<< patientName <<endl;
        cout <<"Patient Age : "<< patientAge <<endl;
        cout <<"patient Illness: "<< patientillness <<endl;
    }
};
int main()
{
    /************* Hospital H1 *********************/
    Hospital H1;
    H1.SetHospitalName("HOPE HOSPITAL");
    H1.SetLocation("SOHAG");
    H1.SetDocNumber(15);
    H1.SetBedNumber(50);
    H1.SetpatientNumber(33);
    H1.ShowData();
    cout <<"=============================================" << endl;
    /************* Hospital H2 *********************/
    Hospital H2 = ++H1;
    H2.SetHospitalName("PEACE HOSTPITAL");
    H2.SetLocation("ASSIUT");
    H2.SetDocNumber(25);
    H2.SetBedNumber(21);
    H2.SetpatientNumber(55);
    H2.ShowData();
    cout <<"=============================================" << endl;
    /************* Hospital H3 *********************/
    Hospital H3 = H1 + H2;
    H3.SetHospitalName("St.Mary HOSPITAL");
    H3.SetLocation("HELWAN");
    H3.ShowData();
    cout <<"=============================================" << endl;
    /*************Patient P1 *********************/
    Patient P1;
    P1.SetHospitalName("St.Mary HOSTPITAL");
    P1.SetLocation("HELWAN");
    P1.SetPatientName("Hanan");
    P1.SetPatientAge(34);
    P1.SetPatientIllness("broken leg");
    P1.ShowData();
    cout <<"=============================================" << endl;
    /*************Patient P2 *********************/
    Patient P2;
    P2.SetHospitalName("HOPE HOSPITAL");
    P2.SetLocation("SOHAG");
    P2.SetPatientName("Hani");
    P2.SetPatientAge(60);
    P2.SetPatientIllness("HeartAttack");
    P2.ShowData();
    cout <<"=============================================" << endl;
    return 0;
}

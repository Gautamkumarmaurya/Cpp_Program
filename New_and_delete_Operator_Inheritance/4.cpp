/*4.Write a C++ program to design a base class Person (name, address, phone_no). Derive
a class Employee (eno, ename) from Person. Derive a class Manager (designation,
department name, basic-salary) from Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary.  */


#include<iostream>
using namespace std;

class person
{
protected :
    char pname[50], address[100];
    long long phone_no;

};

class Employee : public person
{
public :
    int eno;
    char ename[50];
};

class Manager : public Employee
{
public :
    char designation[50];
    char deptname[100];
    float basic_salary;

public:
    void accept_details()
    {
        cout<<"\n Enter Details of Manager :";
        cout<<"\n-----------------------------";
        cout<<"\n Enter Employee No.    : ";
        cin>>eno;

        cout<<"\n Enter the Name        : ";
        cin>>ename;
        cout<<"\n Enter Address         : ";
        cin>>address;
        cout<<"\n Enter Phone No        : ";
        cin>>phone_no;
        cout<<"\n Enter Designation     :";
        cin>>designation;
        cout<<"\n Enter Department Name : ";
        cin>>deptname;
        cout<<"\n Enter the Salary      :";
        cin>>basic_salary;
    }
};
int main()
{
    int i, cnt, temp;
    Manager man[100];
    cout<<"\n How Many Managers You want to Enter ? :";
    cin>>cnt;

    for(int i=0; i<cnt; i++)
    {
        man[i].accept_details();
    }

    temp=0;
    for(i=1; i<=cnt; i++)
    {
        if(man[temp].basic_salary< man[i].basic_salary)
            temp=i;
    }
    cout<<"\nManager With Highest Salary : "<<man[temp].basic_salary;
    cout<<"\n And Manager Name is :"<<man[temp].ename;
    return 0;
}

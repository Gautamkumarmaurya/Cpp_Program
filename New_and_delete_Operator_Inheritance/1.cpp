/*1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.  */

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
protected :

    char name[20];
    int age;

public :
      void setName(const char *c)
      {
          strcpy(name,c);
      }

      void setAge(int n)
      {
          age = n;
      }

      char *getName()
      {
          return name;
      }

      int getAge()
      {
          return age;
      }
};
class Employee : public Person
{
protected :

    int Empid;
    int salary;

public :

    void setEmpid(int id)
    {
         Empid = id;
    }

    void setSalary(int x)
    {
         salary = x;
    }

    int getEmpid()
    {
         return Empid;
    }

    int getSalary()
    {
         return salary;
    }

    void display()
    {
        cout<<"Name   : "<<name<<endl;
        cout<<"Age    : "<<age<<endl;
        cout<<"Emp.id : "<<Empid<<endl;
        cout<<"Salary : "<<salary<<endl;
    }

};
int main()
{
     Employee e;
      e.setName("Gautam");
      e.setAge(19);
      e.setEmpid(121);
      e.setSalary(35000);
      e.display();
    return 0;
}


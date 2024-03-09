/*
Write class declarations and member function definitions for a C++ base class to represent an 
Employee (emp-code, name). Derive two classes as Fulltime (daily rate, number of days, salary) 
and Parttime (number of working hours, hourly rate, salary).

Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.
*/

#include<bits/stdc++.h>
using namespace std;
const int m=50;

class emp
{
   public :
        int empno;
        string empname;

        void set()
        {
            cout<<"\nEnter Employee No.      :  ";
            cin>>empno;
            cout<<"\nEnter Employee Name     :  ";
            cin.get();
            getline(cin,empname);
        }
};
class fulltime : public emp
{
    public :
           float daily_rate;
           int days;
           int salary;

        void setdata()
        {
            cout<<"\nEnter Daily Rate        : ";
            cin>>daily_rate;
            cout<<"\nEnter No. of Days       : ";
            cin>>days;
        }

        void cal()
        {
            salary = daily_rate * days;
            cout<<"\n Salary  :  "<<salary;
        }

        void show()
        {
            cout<<"\n-----------------------------------------\n";
            cout<<"\nEmployee Number      : "<<empno;
            cout<<"\nEmployee Name        : "<<empname;
            cout<<"\nSalary               : "<<salary;
            cout<<"\nStatus               : Fulltime ";
            cout<<"\n-----------------------------------------\n";
        }
};
class parttime : public emp
{
    public :
         int hourly_rate;
         int working_hours;
         int salary1;

    public :
         void set1()
         {
            cout<<"\nEnter Hourly Rate    : ";
            cin>>hourly_rate;
            cout<<"\nEnter Working Hours  : ";
            cin>>working_hours;
         }

         void call()
         {
            salary1 = hourly_rate * working_hours;
            cout<<"\n Salary   : "<<salary1<<endl;
         }

         void show1()
         {
            cout<<"\n--------------------------------\n";
            cout<<"\n Empolyee No         : "<<empno;
            cout<<"\n Empolyee Name       : "<<empname;
            cout<<"\n Salary              : "<<salary1;
            cout<<"\n Status              : Part Time ";
            cout<<"\n---------------------------------\n";
         }
};
int main()
{
    int var=0;
    int var1=0;
    fulltime f1[5];
    parttime p1[5];

    int x,i;

    do
    {
       cout<<"\n";
       cout<<"\n 1.Enter Record ";
       cout<<"\n 2.Display Record ";
       cout<<"\n 3.Search Record ";
       cout<<"\n 4.Quit ";
       cout<<"\n\n Enter Your choice : ";
       cin>>x;

       switch(x)
       {
        case 1:
            int y;
            cout<<"\n 1. Fulltime Empolyee ";
            cout<<"\n 2. Parttime Empolyee ";
            cout<<"\n Enter : ";
            cin>>y;
                switch (y)
                {
                case 1:
                    f1[var].set();
                    f1[var].setdata();
                    f1[var].cal();
                    var++;
                    break;

                case 2:
                     p1[var1].set();
                     p1[var1].set1();
                     p1[var1].call();
                     var1++;
                     break;

                }
            break;
               case 2:
                   for(i=0; i<var; i++)
                   {
                    f1[i].show();
                   }
                   for(i=0; i<var1; i++)
                   {
                    p1[i].show1();
                   }
                   break;

                case 3:
                    int a;
                    cout<<"\n Enter Employee No. : ";
                    cin>>a;
                    for(int i=0; i<var; i++)
                    {
                        if(f1[i].empno==a)
                        {
                            f1[i].show();
                        }
                    }

                    for(int i=0; i<var; i++)
                    {
                        if(p1[i].empno==a)
                        {
                            p1[i].show1();
                        }
                    }
       }

    }while(x!=4);

    return 0;
}

/*
Consider two base classes worker(int code, char name, float salary),officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base classes.
Write necessary member functions.

 Enter code         : 102
 Enter Name         : Gautam
 Enter Salary       : 500000
 Enter DA           : 1000
 Enter HRA          : 2000

 -----------------------------
 Manager Information 
------------------------------
 Code          : 102
 Name          : Gautam
 Salary        : 500000
 DA            : 1000
 HRA           : 2000
 TA            : 50000
 Gross Salary      : 553000
*/


#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class worker
{
    protected :
         int code;
         char name[200];
         float salary;

    public :
         worker()
         {
             // Default Constructor
         }

         worker(int c, char *n, float s)
         {
            code = c;
            strcpy(name,n);
            salary = s;
         }

         void putw()
         {
            cout<<"\n Code          : "<<code;
            cout<<"\n Name          : "<<name;
            cout<<"\n Salary        : "<<salary;
         }
};

class officer
{
    protected :
             float DA, HRA;

    public :
             officer()
             {
                //Default constructor
             }

             officer(float d , float h)
             {
                DA = d;
                HRA = h;
             }

             void puto()
             {
                cout<<"\n DA            : "<<DA;
                cout<<"\n HRA           : "<<HRA;
             }
};

class manager : public worker , public officer
{
        private :
             float TA;
             float gsal;
        public :

             manager()
             {

             }

             manager(int c, char *n, float s, float d, float h) : worker(c, n, s), officer(d,h)
             {

             }

             void putm()
             {
                putw();
                puto();
                TA = 0.10*salary;
                cout<<"\n TA            : "<<TA;
                gsal = DA+ HRA + TA + salary;
                cout<<"\n Gross Salary      : "<<gsal;
             }
};
int main()
{
    int i, cnt;
     int c;

    cout<<"\n Enter Manager Count : ";
    cin>>cnt;
    manager *m;
    m= new manager[cnt];
    for(i=0; i<cnt; i++)
    {
        cout<<"\n Enter Worker Information for  "<<i+1<<"\n";
        cout<<"\n-----------------------------------";
        cout<<"\n Enter code         : ";
        cin>>c;
        cout<<"\n Enter Name         : ";
        char n[200];
        cin>>n;
        cout<<"\n Enter Salary       : ";
        float s;
        cin>>s;
        cout<<"\n Enter DA           : ";
        float d;
        cin>>d;
        cout<<"\n Enter HRA          : ";
        float h;
        cin>>h;
        m[i] = manager(c,n,s,d,h);

    }

    for(i =0; i<cnt; i++)
    {
        cout<<"\n----------------------------------";
        cout<<"\n Manager Information ";
        cout<<"\n-----------------------------------";
        m[i].putm();
    }
    return 0;
}
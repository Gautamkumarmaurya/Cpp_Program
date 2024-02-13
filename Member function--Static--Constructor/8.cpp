// Define a class Bank and define member functions to read principal , rate of interest and
// year. Another member functions to calculate simple interest and display it. Initialise all details
// using constructor.


#include<iostream>
using namespace std;

class Bank
{
private:
    float p;
    float r;
    float t;
    float si;
    float amount;
public:
     void read()
    {
       cout<<"Enter principle amount ::"<<endl;
       cin>>p;
       cout<<"Enter rate of interest ::"<<endl;
       cin>>r;
       cout<<"Enter number of year   ::"<<endl;
       cin>>t;
       si = (p*r*t)/100;
       amount = si + p;
    }
    void print()
    {
        cout<<"\nEntered details are ........."<<endl;
        cout<<"\nprinciple amount :"<<p<<endl;
        cout<<"Rate of Interest :"<<r<<endl;
        cout<<"Number of year   :"<<t<<endl;
        cout<<"Interest         :"<<si<<endl;
        cout<<"\nTotal amount   :"<<amount<<endl;
    }
};
int main()
{

    Bank b;
    b.read();
    b.print();
    return 0;

}

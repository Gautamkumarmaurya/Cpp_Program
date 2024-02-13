/*  Define a class Bill and define its member function get() to take detail of customer ,
   calculateBill() function to calculate electricity bill using below tariff :
   Upto 100 unit RS. 1.20 per unit
   From 100 to 200 unit RS. 2 per unit
   Above 200 units RS. 3 per unit.
*/


#include<iostream>
using namespace std;

class bill
{
private :
    int c_no;
    char c_name[20];
    float units;
    long long int total_bill;
public :
    void get()
    {
        cout<<"Enter Details of Customer Below :"<<endl;
        cout<<"Enter customer no ::"<<endl;
        cin>>c_no;
        cout<<"\nEnter customer name ::"<<endl;
        cin>>c_name;
        cout<<"Enter no of Unit used ::"<<endl;
        cin>>units;
    }
    void put()
    {
        cout<<"\nEntered Details of customer are ..........."<<endl;
        cout<<"\nCustomer No is ::"<<c_no;
        cout<<"\n\nCustomer name is ::"<<c_name;
        cout<<"\n\nNumber of units Consumed ::"<<units;
        cout<<"\n\nBill of Customer ::"<<total_bill;
    }
    void calc_bill()
    {
        if(units<=100)
        total_bill = units * 1.20;
            else if(units <= 200)
            total_bill = 100*1.20+(units-100)*2;
        else
            total_bill = 100*1.20+100*2+(units-200)*3;
    }
};
int main()
{
    bill b1;
    b1.get();
    b1.calc_bill();
    b1.put();
    cout<<"\n";
    return 0;
}




 
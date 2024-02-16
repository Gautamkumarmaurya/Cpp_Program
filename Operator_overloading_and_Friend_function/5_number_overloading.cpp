/*
   Consider following class Numbers
   class Numbers
   {

   int x,y,z;
   public:
  // methods
   };
   Overload the operator unary minus (-) to negate the numbers.
*/


#include<iostream>
using namespace std;

class Number
{
private:
    int x,y,z;
public:
    void accpet()
    {
        cout<<"\nEnter the Three number..."<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"\nEnter the first number..."<<endl;
        cin>>x;
        cout<<"Enter the Second number..."<<endl;
        cin>>y;
        cout<<"Enter the Third number..."<<endl;
        cin>>z;
        cout<<"-------------------------------"<<endl;
    }
    void display()
    {
       cout<<"  "<<x<<"  "<<y<<"  "<<x<<endl;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    Number num;
    num.accpet();
    cout<<"\n Number are :\n\n"<<endl;
    num.display();
    -num;
    cout<<"\n Negated are .....\n\n";
    num.display();
    return 0;
}

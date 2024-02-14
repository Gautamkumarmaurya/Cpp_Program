/*  Define a class Complex with appropriate instance variables and member functions.Define following operators 
  in the class:
  a. +
  b. -
  c. *
  d. ==
*/


#include<iostream>
using namespace std;

class complex
{
    int a,b;
public :
    complex()
    {

    }

    complex(int x,int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout<<"a + i b = "<<a<<" +"<<b<<"i"<<endl;

    }


   complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
       complex operator-(complex c)
    {
        complex temp;
        temp.a = a - c.a;
        temp.b = b -c.b;
        return temp;
    }
       complex operator*(complex c)
    {
        complex temp;
        temp.a = a * c.a;
        temp.b = b * c.b;
        return temp;
    }
       bool operator ==(complex c)
    {
        if(a == c.a && b ==c.b )
            return true;
        else
            return false;
    }
};
int main()
{
    int x,y,a,b;
    cout<<"Enter first two complex number"<<endl;
    cin>>x>>y;
    cout<<"Enter Second two complex number "<<endl;
    cin>>a>>b;
    complex c1(x,y),c2,c3(a,b);
    c2 = c1 + c3;
    c2.print();
    c2 = c1 - c3;
    c2.print();
    c2 = c1 * c3;
    c2.print();
  cout<<"compare c1 == c3 "<<(c1==c3)<<endl;

    return 0;
}

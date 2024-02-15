//  Write a C++ program to add two complex numbers using operator overloaded by a friend function.


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


   friend complex operator+(complex p,complex q)
    {
        complex temp;
        temp.a = p.a + q.a;
        temp.b = p.b + q.b;
        return temp;
    }


};
int main()
{
    int x,y;

    cout<<"Enter two complex number"<<endl;
    cin>>x>>y;
    complex c1(x,y),c2,c3(5,6);
    c2 =  operator+(c1,c3);
    c2.print();

    return 0;
}

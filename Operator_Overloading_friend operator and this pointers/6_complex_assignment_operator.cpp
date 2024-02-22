/*
Create a complex class and overload assignment operator for that class.
*/


#include<iostream>
using namespace std;

class complex
{
private :
    int real;
    int imaginary;

public :

    complex()
    {

    }

    complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    complex operator=(complex c)
    {
        complex temp;
        temp.real = real=c.real;
        temp.imaginary = imaginary=c.imaginary;
        return temp;
    }

    void display()
    {
        cout<<"Complex number "<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
int main()
{
    int a,b,x,y;
    cout<<"Enter the first Two number :"<<endl;
    cin>>a>>b;
    cout<<"Enter the Second Two number :"<<endl;
    cin>>x>>y;
    complex c1(a,b),c2(x,y),c3;

    c3 = (c2=c1);
     
    c3.display();
    return 0;
}

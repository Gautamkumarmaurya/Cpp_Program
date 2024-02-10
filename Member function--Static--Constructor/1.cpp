//  Define a class Complex to represent a complex number with instance variables a and b
//  to store real and imaginary parts. Also define following member functions
//  a. void setData(int,int)
//  b. void showData()
//  c. Complex add(Complex)




#include<iostream>
using namespace std;

class complex
{
    int x,y;
    int a,b;
public:
    complex()
    {

    }
    void setData(int real,int imaginary)
    {
        a = real;
        b = imaginary;
    }

    complex(int real ,int imaginary)
    {
        x = real;
        y = imaginary;
    }
    void ShowData()
    {
        cout<<"Number is "<<a<<" + "<<b<<"i"<<endl;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    complex c1,c2;
    c1.setData(2,4);
    c2.setData(3,4);
    complex c3 = c1.add(c2);
   c3.ShowData();
   return 0;

}

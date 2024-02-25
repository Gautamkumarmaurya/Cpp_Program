/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x = 5;
c1 = x;
return 0;
}*/

#include<iostream>
using namespace std;

class Complex
{
    private :
     int real;
     int imaginary;

     public :

     Complex()
     {

     }

     Complex(int a)
     {
        real = a;
        imaginary = a;
     }

     void display()
     {
        cout<<"Complex Number "<<real<<" + "<<imaginary<<"i"<<endl;
     }
};
int main()
{
 
    Complex c1;
    int x = 5;
    c1 = x; // Implicit conversion from int to Complex
    c1.display();

    return 0;
}

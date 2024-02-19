/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator */


#include<iostream>
using namespace std;

class complex
{
private :
    int real;
    int imaginary;

public:

    complex()
    {

    }

    complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }

    friend ostream&   operator<<(ostream &out, const complex &c)  
    {
        cout<<"\nComplex Number "<<c.real<<" + "<<c.imaginary<<"i"<<endl;
        return out;
    }

    friend istream& operator>>(istream &in, complex &c)
    {
        cout<<"Enter the First number  : ";
        in>>c.real;
        cout<<"Enter the Second number : ";
        in>>c.imaginary;
        return in;
    }
};
int main()
{
    complex c1,c2;
    cin>>c1;
    cout<<c1<<endl;
    return 0;
}

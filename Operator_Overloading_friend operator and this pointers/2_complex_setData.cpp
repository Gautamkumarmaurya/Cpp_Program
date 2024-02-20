/*
Define a class Complex with appropriate instance variables and member functions. Oneof the functions 
should be setData() to set the properties of the object. Make sure the names of formal arguments are 
the same as names of instance variables.
*/



#include<iostream>
using namespace std;

class complex
{
  private :
     int real, imaginary;
  public :

       complex()
       {
        
       }

      complex(int a, int b)
        {
            real = a;
            imaginary = b;

        }

      void setData()
        {
            cout<<"Enter The Real number : "<<endl;
            cin>>real;
            cout<<"\nEnter the Imaginary number : "<<endl;
            cin>>imaginary;
        }

        void print()
        {
            cout<<"Complex number ::"<<real<<" + "<<imaginary<<"i"<<endl;
        }
};
int main()
{
    complex c;
    c.setData();
    c.print();
    return 0;
}
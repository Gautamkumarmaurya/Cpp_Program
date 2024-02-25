/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}*/


#include<iostream>
using namespace std;

class complex
{
  private :
       
  public :
       int real;
       int imaginary;

   complex(){} 

   complex(int x, int y)
  {
     real = x;
     imaginary = y;
  }

  void setdata()
  {
    cout<<"Enter the Real Number : ";
    cin>>real;
    cout<<"Enter the Imaginary Number : ";
    cin>>imaginary;
  }

  operator int()
  {
    return (real+imaginary);
  }

  void display()
  {
    cout<<"Complex number "<<real<<" + "<<imaginary<<"i"<<endl;
  }

};
int main()
{
  complex c1;
  c1.setdata();
  int x = int(c1);
  cout<<int(c1)<<endl;
  c1.display();
  return 0;
}

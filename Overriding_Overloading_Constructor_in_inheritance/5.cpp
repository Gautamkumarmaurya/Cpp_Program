// Define a class A having multiple constructors. Define another class B derived from class
// A. Create derived class constructors and show use of constructor in this single inheritance.


#include<iostream>
using namespace std;

class A
{
    protected :
           int x;

    public :
            
            A()
            {
                x = 0;
                cout<<"Class A is called a Default Constructor "<<endl;
            }

            A(int a)
            {
                x = a;
                cout<<"Class A is called a paramiterized constructor "<<endl;
            }

            void getdata()
            {
                cout<<"Enter the Value ";
                cin>>x;
            }

            void display()
            {
                cout<<" X   :: "<<x<<endl;
            }

};

class B : public A
{ 
    protected :
         int y;

    public :
         
         B() : A()
         {
            y = 0;
         }

         B(int z , int x)  : A(x)
         {
            y = z;
         }

         void gatdata1()
         {
            cout<<"Enter the number ";
            cin>>y;
         }

         void show()
         {
            cout<<"Y   :: "<<y;
         }

};

int main()
{ 
    B b;
    b.getdata();
    b.display();

    b.gatdata1();
    b.show();

    return 0;
}
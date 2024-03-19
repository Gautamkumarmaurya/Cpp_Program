/*
Create a base class called proof. Use this class to store two int type values that could be
used to prove that triangle is a right angled triangle. Create a class compute which will determine 
whether a triangle is a right angled triangle. Using these classes, design a program that will accept 
dimensions of a triangle, and display the result.
*/

#include<iostream>
using namespace std;

class Proof
{
     
    public:
        int h;
        int b;
        int p;

        Proof( int h, int b ,int p)
        {
           this->h = h;
           this->b = b;
           this->p = p;
        }

        void compute()
        {
           if(h*h == b*b + p*p) 
           cout<<"yes"<<endl;
           else
           cout<<"No "<<endl; 
        } 
};

 
int main()
{
    Proof *t = new Proof(5,4,3);
    t->compute();   
    return 0;
}
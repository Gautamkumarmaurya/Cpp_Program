/*
Write a C++ program to find the factorial of a number using copy constructor
*/
#include<iostream>
using namespace std;

class Factorial
{
    int fact;
    int num;
    public :

          Factorial(int n)
          {
            num = n;
          }

          Factorial( const Factorial &n)
          {
            num = n.num;
          }

         void factorial()
         {
             fact = 1;
            for(int i=1; i<=num; i++)
            {
                fact = fact*i;
            }
         }

         void display()
         {
            cout<<"Factorial Number "<<num<<" is "<<fact<<endl;
            cout<<endl;
         }
};
int main()
{
    int x;
    cout<<"Enter the Number : ";
    cin>>x;
    Factorial f(x);
    f.factorial();
    f.display();
    return 0;
}
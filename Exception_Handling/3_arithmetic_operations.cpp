/*3.Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator. */


#include<iostream>
#include<string>
using namespace std;

int main()
{
    float num1, num2, ans;
    char Operator;

    cout<<"\n perform Arithmetic operations on two number "<<endl;

    try
    {
        cout<<"Enter the first number :"<<endl;
        cin>>num1;

        cout<<"\nEnter the Operator : "<<endl;
        cin>>Operator;

        if(Operator!='+' && Operator!='-' && Operator!='*' && Operator!='/')
           throw Operator;

           cout<<"\n Enter the Second number "<<endl;
           cin>>num2;

           switch(Operator)
           {
                case '+':
                ans = num1+num2;
                break;

                case '-':
                ans = num1-num2;
                break;

                case '*':
                ans = num1*num2;
                break;

                case '/':
                if(num2==0)
                    throw 0;
                ans = num1/num2;
                break;

           }
           cout<<"\n Answer :: "<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans<<endl;
    }
    catch(const char c)
    {
        cout<<"\n Exception caught...\n Bad Operator :"<<c<<" is not a valid Operator "<<endl;
    }
    catch(const int n)
    {
        cout<<"\n Error : Bad Operator...";
    }
    return 0;
}

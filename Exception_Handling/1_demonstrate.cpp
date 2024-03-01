
/*Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/


#include<iostream>
using namespace std;

void test_try(int num)
{
    const char *c ="String Handling";

    try
    {
        if(num>=0 && num<=9) 
             throw num;
        else
             cout<<"It is not a single number"<<endl;
             throw *c;

    }
    catch(int a)
    {
        cout<<"\n It is a single number "<<a<<endl;
    }

    catch(char b[100])
    {
        cout<<b;
    }
}
int main()
{
    int num;
    cout<<"\n Enter the number "<<endl;
    cin>>num;
    test_try(num);
    return 0;
}

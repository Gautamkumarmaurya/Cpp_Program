/*2.Write a C++ program to demonstrate try, throw and catch statements.*/


#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;
    try
    {
        throw 1;
    }
    catch(char e)
    {
        cout<<"\n Exception Caught "<<e<<endl;
    }
    catch(...)
    {
        cout<<"\n Other Exception "<<endl;
    }
    cout<<"\n outside catch block"<<endl;

    return 0;
}

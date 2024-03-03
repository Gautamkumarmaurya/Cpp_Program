/*6.Write a C++ program to accept area pincode and throw an exception if it does not
contain 6 digits.*/


#include<iostream>
using namespace std;

int main()
{
    long long int code;
    int count=0;

    cout<<"Enter the Pin code number :: "<<endl;
    cin>>code;
    cout<<endl;

    try
    {
        while(code!=0)
        {
            code=code/10;
            count++;
        }
        if(count==6)
            throw 1;

        if(count!=6)
            throw 2;
    }
    catch(int code)
    {
        if(code==1)
            cout<<"Your Area Pin code is Valid "<<endl;

        if(code==2)
            cout<<"Sorry Sir. Your Pin code is Invalid "<<endl;
    }
    return 0;
}

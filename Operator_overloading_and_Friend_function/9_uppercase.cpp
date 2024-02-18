/*
Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
Lowercase and vice versa).

*/



#include<iostream>
using namespace std;

class Mystring
{
private :
    char str[500];
public:
    void operator!();
    void accept_string()
    {
        cout<<"\nEnter the String : ";
        cin>>str;
    }
    void display_string()
    {
        cout<<str;
    }
};
    void Mystring :: operator!()
    {
         for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i] = str[i]+32;
            }
            else if(str[i]>= 97 && str[i]<=122)
            {
                str[i] = str[i]-32;
            }
        }
        cout<<"Reverse case string is "<<str<<endl;
    }

int main()
{
    Mystring s1;
    s1.accept_string();
    cout<<"String is ";
    s1.display_string();
    !s1;
    return 0;
}

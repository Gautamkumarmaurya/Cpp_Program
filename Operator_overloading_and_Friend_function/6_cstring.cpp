/*
    Create a class CString to represent a string.
    a) Overload the + operator to concatenate two strings.
    b) == to compare 2 strings.
*/



#include<iostream>
#include<string.h>
using namespace std;

class cstring
{
 public:
    char str[20];
public:
    void get_string()
    {
        cout<<"\nEnter the string "<<endl;
        cin>>str;
    }

    void display()
    {
        cout<<str<<endl;
    }
    
    cstring operator+(cstring x)
    {
        cstring s;
        strcpy(s.str,str);
        strcat(s.str,x.str);
        return s;
    }

    int operator==(cstring &t);
};

int cstring :: operator==(cstring &t)
{
    int equalornot = 1;
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]!=t.str[i])
        {
            equalornot = 0;
            break;
        }
    }
    return equalornot;
}

int main()
{
    cstring str1,str2,str3;
    int result=0;

    str1.get_string();
    str2.get_string();

    cout<<"\n----------------------";
    cout<<"\n\n First string is   : ";
    str1.display();

    cout<<"\n\n Second string is  : ";
    str2.display();

    cout<<"\n----------------------";
    str3 = (str1 + str2);

    cout<<"\n\n Concatenated string is  :";
    str3.display();

    result = (str1 == str2);

        if(result == 1)
        {
            cout<<"\n\n Both are string are equal"<<endl;
        }
        else
        {
            cout<<"Both are string are not equal"<<endl;
        }
        return 0;
}

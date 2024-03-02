 /*4.Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol. */

#include<iostream>
using namespace std;

bool isValiEmailId(char *);
int main()
{
     char email[100];


    cout<<"\n Enter the email id"<<endl;
    // cin.getline(email,100); 
    gets(email);
    try
    {
        if(isValiEmailId(email))
            cout<<"\n Email Id is Valid. "<<endl;
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"\n Exception Caught... \n Wrong Email Id!!!"<<endl;
    }
    catch(...)
    {
        cout<<"\n Default Exception ";
    }
    return 0;
}
bool isValiEmailId(char *email)
{
    int AtOffset = -1;
    int DotOffset = -1;
    int length = 0;


    for(int i = 0; email[i]!= '\0'; i++)
    {
        if(email[i] == '@')
            AtOffset = i;

        else if(email[i] == '.')
            DotOffset = i;


        else if(email[0] == '@' || email[0] == '!' || email[0] == '#' || email[0] == '$' || email[0] == '%'
            || email[0] == '^' || email[0] == '&' || email[0] == '*' || email[0] == '_' || email[0] == '-'
            || email[0] == '=' || email[0] == '+' || email[0] == '.' || email[0] == '(' || email[0] == ')'
            || email[0] == '{}'|| email[0] == '}' || email[0] == '{' || email[0] == ']' || email[0] == '['
            || email[0] == ':' ||email[0] == ';'  ||email[0] == '"'  ||email[0] == '|'  || email[0] =='~'
            || email[0] == '<' ||email[0] == '>'  ||email[0] == ','  ||email[0] == '?'  ||email[0] == '/'
            || email[0] == '`' ||email[0] == '1'  ||email[0] == '2'  ||email[0] == '3'  ||email[0] == '4'
            ||email[0] == '5'  ||email[0] == '6'  ||email[0] == '7'  ||email[0] == '8'  ||email[0] == '9'
            ||email[0] == '0')
             return 0;

        length++;
    }
    int count=0,count1=0;
     for(int i=0;  email[i]!= '\0'; i++)
        {
            if(email[i] == '@') 
              count++;
        }
        if(count > 1)
        return 0;

    for(int i=0; email[i]!= '\0' ; i++)
    {
        if(email[i] == '.')
          count1++;
    }
       if(count1 > 1)
       return 0;

    if(AtOffset == -1 || DotOffset == -1)
        return 0;

    if(AtOffset > DotOffset)
        return 0;
    return (DotOffset < (length-2));
}



 
/*9.Write a C++ program to accept gmail id only and throw an exception if the id does not
contain @ and gmail.com.  */

#include<iostream>
using namespace std;
bool isGmailValid(char *);

int main()
{
    char gmail_id[100];

    cout<<"Enter the Gmail id :"<<endl;
    cin>>gmail_id;
    cout<<endl;

    try
    {
           if(isGmailValid(gmail_id))
            cout<<"\n Yes. Gmail Id is Valid. "<<endl;
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"Gmail Id is Invalid "<<endl;
    }
    // catch(...)
    // {
    //     cout<<"Default Exception"<<endl;
    // }
  return 0;
}
bool isGmailValid(char *gmail_id)
{
     int AtOffset = -1;

     int length = 0;
    for(int i = 0; gmail_id[i]!= '\0'; i++)
    {
        if(gmail_id[i] == '@')
            AtOffset = i;
    }
    length++;

     if(AtOffset == -1)
        return 0;
}

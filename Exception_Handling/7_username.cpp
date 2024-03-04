/*7.Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol. */


#include<iostream>
 using namespace std;

 int main()
 {
     char username[20];
     int length=0;

     cout<<"Enter the UserName ::"<<endl;
     cin>>username;
     cout<<endl;
     try
     {
          for(int i=0; username[i]!= '\0'; i++)
          {
              length++;
          }

         if(length <= 6)
           throw 2;

          if(length >= 6)
           throw 3;

          throw length;

     }
     catch( int username)
     {
        if(username==length)
          cout<<"Your UserName is Size "<<length<<endl;

        if(username==2)
          cout<<"Your UserName is Successfully is Valid "<<endl;

        if(username==3)
        cout<<"Wrong UserName.. Less than 6 character "<<endl;
     }
     return 0;
 }




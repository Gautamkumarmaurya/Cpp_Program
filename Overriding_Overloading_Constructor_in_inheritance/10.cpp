/*
10.Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of matches
varies for each player. Write a parameterized constructor which initializes player no.,
name, number of matches and creates an array for number of goals and number of
matches dynamically.
*/

#include<iostream>
using namespace std;

class player
{
   int player_no, no_of_matches;
   char player_name[100];
   int *goals;

   public :
       player()
       {
         int i;
         cout<<"\n Enter player No. : ";
         cin>>player_no;
         cout<<"\n Enter player Name : ";
         cin>>player_name;
         cout<<"\n Enter no. of Match : ";
         cin>>no_of_matches;
         goals  = new int [no_of_matches];
         for(i =0; i<= no_of_matches-1; i++)
         {
            cout<<"\n Enter no. of Goals in Match "<<i+1;
            cin>>goals[i];
         }
       }

       void display()
       {
          int i;
          cout<<"\n----------------------------------";
          cout<<"\n player No. " <<player_no;
          cout<<"\n player Name. " <<player_name;
          cout<<"\n No. of Matches played : " <<no_of_matches;
          for(i=0; i<=no_of_matches-1; i++)
          {
            cout<<"\n Match "<<i+1<<"Goals : "<<goals[i];
          }
       }
};
int main()
{
    player p;
    p.display();
    return 0;
}
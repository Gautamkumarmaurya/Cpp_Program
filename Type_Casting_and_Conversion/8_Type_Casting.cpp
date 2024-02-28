/*
Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
  Rupee r = 10;
  int x = r;
  cout<<x;
  return 0;
 }

*/
#include<iostream>
using namespace std;

class Rupee
{
private :
    int x;
public :

    Rupee(int y)
    {
        x = y;
    }

    operator int()
    {
        return x;
    }

};
int main()
{
    int y;
    cout<<"Enter the Rupee ";
    cin>>y;
    Rupee r(y);
    int x = r;
    cout<<x;
    return 0;
}

/*9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/

#include<iostream>
using namespace std;

class Integer
{
private :
    int x;
public :

    Integer(int y)
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
    int y ;
    cout<<"Enter the one Element ";
    cin>>y;
    Integer i=y;
     int x = i;
     cout<<"X = "<<x<<endl;
     return 0;
}

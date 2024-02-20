/*
Overload subscript operator [] that will be useful when we want to check for an index out of bound.
*/

#include<iostream>
using namespace std;

class subcript
{
private :
    int sub[100];
    const int size = 100;

public :

     subcript()
     {

     }

     void setsubscript(int n ,int index)
     {
         if(index>= size)
         {
             cout<<"Array Index out of Bound Exception "<<endl;
             exit(0);
         }
         sub[index]=n;
     }

    void display(int index)
    {
        cout<<sub[index]<<endl;
    }

    int operator[](int index)
     {
         if(index>= size)
         {
             cout<<"Array Index out of Bound Exception "<<endl;
             exit(0);
         }
          return sub[index];
     }
};
int main()
{
    subcript s;
    s.setsubscript(80,90); // Number->80 and index->90
    s.display(90);
    return 0;
}

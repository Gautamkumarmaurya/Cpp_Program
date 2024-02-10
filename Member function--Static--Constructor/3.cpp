//   Define a class Cube and calculate Volume of Cube and initialise it using constructor.


#include<iostream>
using namespace std;

class Cube
{
private:

    int a;
    int volume;
public:
    Cube(int x)
    {
        a = x;
    }
    void cube()
    {
        volume = a*a*a;
    }
    void print()
    {
       cout<<"Volume of cube = "<<volume<<endl;
    }
};
int main()
{
    Cube c(3);
    c.cube();
    c.print();
    return 0;
}

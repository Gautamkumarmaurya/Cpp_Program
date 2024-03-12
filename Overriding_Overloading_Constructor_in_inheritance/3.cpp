// Define a base class Animals having member function sound() . Define another derived
// class from Animals class named Dogs. You need to override the sound function of the
// base class in the derived class.

#include<iostream>
using namespace std;

class Animals
{
    public :

    void sound()
    {
        cout<<"Animal Sound !"<<endl;
    }
     
};

class Dogs : public Animals 
{
    public :
        void sound()
        {
            cout<<"Dogs Sound! "<<endl;
        }

};
 

int main()
{
    Dogs d;
    d.sound();

    return 0;
}
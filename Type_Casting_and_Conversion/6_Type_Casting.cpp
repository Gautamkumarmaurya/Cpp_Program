/*6.Create a Time class and take Duration in seconds. Now you need to convert seconds
(i.e int ) to Time class.

Example-
int main()

{
int duration;
cout<<�Enter time duration in minutes�;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}*/

#include<iostream>
using namespace std;

class Time
{
private :
    int hour;
    int min;
public :

    Time(int duration)
    {
         hour = duration/3600;
         min = (duration%3600)/60;
    }

    void display()
    {
        cout<<"Hour :: "<<hour<<"    Minutes :: "<<min<<endl;
    }

};
int main()
{
    int duration;
    cout<<"Enter time duration in Second "<<endl;
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}

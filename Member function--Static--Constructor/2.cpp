/* Define a class Time to represent a time with instance variables h,m and s to store hour,
   minute and second. Also define following member functions
   a. void setTime(int,int,int)
   b. void showTime()
   c. void normalize()
   d. Time add(Time)
*/





#include<iostream>
using namespace std;

class Time
{
private :
    int hr,min,sec;
public:
    void setTime(int x,int y,int z)
    {
        hr = x;
        min = y;
        sec = z;
    }
    void showTime()
    {


        cout<<endl<<hr<<" : "<<min<<" : "<<sec;

    }
    void normalize()
    {
        min = min + sec /60;
        sec = sec % 60;
        hr  = hr + min / 60;
        min = min % 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min;
        temp.hr  =  hr  + t.hr;
        temp.normalize();
        return (temp);
    }

};
int main()
{
    Time t1, t2, t3;
    t1.setTime(12,50,30);
    t2.setTime(23,20,34);

    t3 = t1.add(t2);

    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}

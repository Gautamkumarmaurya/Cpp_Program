/*    Create a class Time which contains:
    - Hours
    - Minutes
    - Seconds
    Write a C++ program using operator overloading for the following:
    1. = = : To check whether two Times are the same or not.
    2. >> : To accept the time.
    3. << : To display the time.
*/ 

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
       Time()  
       {
             
       }

       Time (int hh, int min, int sec)
       {
          hours = hh;
          minutes = min;
          seconds = sec;
       }

    // Overloading == operator
    bool operator==(const Time& t) const 
    {
        return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
    }

    // Overloading >> operator for input
    friend  istream& operator>>( istream& in, Time& t) 
    {
         cout<<"Enter hours    : ";
         in>>t.hours;
         cout<<"Enter minutes  : ";
         in>>t.minutes;
         cout<<"Enter seconds  : ";
         in>>t.seconds;
         return in;
    }

    // Overloading << operator for output
    friend  ostream& operator<<( ostream& out, const Time& t)
    {
        out << "Time: " << t.hours << ":" << t.minutes << ":" << t.seconds<<endl;
        return out;
    }

     
    void normalize()    // Normalization 
    {
        minutes = minutes + seconds /60;
        seconds = seconds % 60;
        hours   = hours + minutes / 60;
        minutes = minutes % 60;
    }

    Time add(Time t)   // Two time add function
    {
        Time temp;
        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes;
        temp.hours  =  hours  + t.hours;
        temp.normalize();
        return (temp);
    }

};

int main() {
    Time t1, t2,t3;
     cout<<"\n-------------------------------\n";
     cout << "      Enter first time      ";
     cout<<"\n-------------------------------\n";
     cin >> t1;

     cout<<"\n\n";

     cout<<"\n-------------------------------\n";
     cout << "      Enter second time     ";
     cout<<"\n-------------------------------\n";
     cin >> t2;
      
     cout<<"\n--------------------------\n";
     cout << "First time: " <<endl<< t1;
     cout<<"\n--------------------------\n\n";

     cout<<"\n--------------------------\n";
     cout << "Second time: " <<endl<< t2 ;
     cout<<"\n--------------------------\n\n";

    if (t1 == t2) 
    {
         cout << "Both times are the same." <<endl;
         cout<<endl;
    } 
    else 
    {
         cout << "Times are different." <<endl;
         cout<<endl;
    }

    t3 = t1.add(t2);

    cout<<"First Time and Second Time are Add \n";
    cout<<t3<<endl;

    return 0;
}

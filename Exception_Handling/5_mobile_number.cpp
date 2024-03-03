/*5.Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/


 #include<iostream>
 using namespace std;

 int main()
 {
    long long int num;
    int count=0;
    cout<<"Enter the Mobile Number "<<endl;
    cin>>num;
    cout<<endl;
    try
    {
          while(num!=0)
          {
            num=num/10;
            count++;
          }

        if(count==10)
           throw 1;

        if(count!=10)
        throw 2;
    }
     catch(int num)
     {
        if(num==1)
       cout<<"Mobile number is Valid "<<endl;

       if(num==2)
       cout<<"Mobile number is Invalid "<<endl;
     }
     return 0;
 }

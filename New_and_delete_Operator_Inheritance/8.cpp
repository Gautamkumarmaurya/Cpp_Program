/*
In a bank, different customers have savings account. Some customers may have taken aloan from the bank. 
So bank always maintain information about bank depositors and borrowers. Design a Base class Customer 
(name, phone-number). Derive a class Depositor(accno, balance) from Customer. Again, derive a class Borrower 
(loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’ customers.
*/

#include<iostream>
#include<stdio.h>
using namespace std;

class customer
{

    string nm;
    long long phno;

public :
       void acceptc()
       {
           cout<<"\nEnter Customer Name        : ";
           cin.get();
           getline(cin,nm);
           cout<<"\nEnter Customer Phone no    : ";
           cin>>phno;
       }
       void dispc()
       {
           cout<<"\nDetails of Customer \n ";
           cout<<"\n---------------------------------------\n ";
           cout<<"\nCustomer Name              : "<<nm;
           cout<<"\nCustomer Phone no.         : "<<phno;
       }
};
class deposit : public customer
{
    long long int accno;
    long int balance;
public:
    void acceptd()
    {
           cout<<"\nEnter Customer A/c No.     : ";
           cin>>accno;
           cout<<"\nEnter Customer Balance     : ";
           cin>>balance;
    }
    void dispd()
    {
           cout<<"\nCustomer A/c No.           : "<<accno;
           cout<<"\nBalance                    : "<<balance;
           cout<<"\n--------------------------------------\n";
    }
};

class borrow : public deposit
{
    int loan_no;
    long int loan_amt;
public:
    void acceptb()
    {
          cout<<"\nEnter Loan No.             : ";
          cin>>loan_no;
          cout<<"\nEnter Loan Amount          : ";
          cin>>loan_amt;
    }

    void dispb()
    {
          cout<<"\n Loan No                   : "<<loan_no;
          cout<<"\n Loan Amount               : "<<loan_amt;
          cout<<"\n---------------------------------------\n";
    }
};
int main()
{
    borrow *b1;
    int n,i;
    cout<<"\nEnter No. of Customer Details You Want : ";
    cin>>n;
    b1 = new borrow[n];  // Dhayan de yaha par
    for(i=0; i<n; i++)
    {
        b1[i].acceptc();
        b1[i].acceptd();
        b1[i].acceptb();
    }
    for(i=0; i<n; i++)
    {
        b1[i].dispc();
        b1[i].dispd();
        b1[i].dispb();
    }
    return 0;
}

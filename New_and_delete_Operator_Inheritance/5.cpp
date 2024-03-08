/*5.Write a C++ program to define a base class Item (item-no, name, price). Derive a class
Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill
and total amount using appropriate format. */

#include<iostream>
using namespace std;

class ItemDetails
{
public :
    int item_no;
    char item_name[50];
    float item_price;
};
class DiscountedItem : public ItemDetails
{

public :
    int discount_percent;
    int discount_price;

    void accept_details()
    {
        cout<<"\n Enter Item Name        : ";
        cin>>item_name;
        cout<<"\n Enter Item No.         : ";
        cin>>item_no;
        cout<<"\n Enter Item price       :";
        cin>>item_price;
        cout<<"\n Enter Discount Percent :" ;
        cin>>discount_percent;
        cout<<"\n--------------------------\n";
        discount_price = item_price * discount_percent/100;
    }
    void display_details()
    {
        cout<<"\n Item Name        : "<<item_name;
        cout<<"\n Item No          : "<<item_no;
        cout<<"\n Item Price       : "<<item_price;
        cout<<"\n Discount Percent : "<<discount_percent;
        cout<<"\n Discount price   : "<<discount_price;
        cout<<"\n----------------------";
    }
};
int main()
{
    int i, cnt, discount =0 ,price = 0;
    DiscountedItem dt[100];
    cout<<"\n How many items You want to enter ? :";
    cin>>cnt;
    for(i=1; i<=cnt; i++)
    {
        dt[i].accept_details();
    }
    for(i=1; i<=cnt; i++)
    {
        dt[i].display_details();
    }
    for(i=1; i<=cnt; i++)
    {
         price = price + dt[i].item_price;
    }
    for(i=1; i<=cnt; i++)
    {
         discount = discount+dt[i].item_price-dt[i].discount_price;
    }
    cout<<"\n Total Price          : "<<price;
    cout<<"\n Total Discount       : "<<discount;
    cout<<"\n Total Payable Amount : "<<price-discount;

    cout<<"\n please visit Again " ;
    return 0;
}

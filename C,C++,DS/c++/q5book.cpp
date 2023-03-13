#include<iostream>
using namespace std;
class Book
{
    int bookno;
    char booktitle[20];
    float price,n;
public:
    void input()
    {
        cout<<"Enter the read of book :";
        cin>>bookno;
        cout<<"Enter the book title :";
        cin>>booktitle;
        cout<<"Enter the price :";
        cin>>price;
    }
    void PURCHASE()
    {
       cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
       cout<<"\nbookno :"<<bookno;
       cout<<"\nbook title :"<<booktitle;
       cout<<"\nbook price :"<<price;
    }
    void TOTALCOST()
    {
        n=bookno*price;
        cout<<"\ntotal book price :"<<n;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int main()
{
    Book shyam;
    shyam.input();
    shyam.PURCHASE();
    shyam.TOTALCOST();
}
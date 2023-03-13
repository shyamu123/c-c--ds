#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5,ch;

    cout<<"\na:"<<a<<"\tb:"<<b<<"";
    cout<<"\n1.adition";
    cout<<"\n2.subtraction";
    cout<<"\n3.multiplication";
    cout<<"\n4.division";
    cout<<"\nEnter your choice :";
    cin>>ch;
    switch(ch)
    {
        case 1:
               cout<<"\n\na+b:"<<a+b;
               break;
         case 2:
               cout<<"\n\na-b:"<<a-b;
               break;
         case 3:
               cout<<"\n\na*b:"<<a*b;
               break;
         case 4:
               cout<<"\n\na/b:"<<a/b;
               break;
         default:
                cout<<"\nwrong!choice...";
                break;
        
    }
}
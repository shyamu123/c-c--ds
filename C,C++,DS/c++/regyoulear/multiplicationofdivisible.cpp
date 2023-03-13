#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the number a:";
    cin>>a;
    cout<<"Enter the number b:";
    cin>>b;
    c=a*b;
    cout<<"multiplication :"<<c;
    if(c%3==0 && c%7==0)
    {
        cout<<"\ndevisible :"<<c;
    }
    else
    {
        cout<<"\nnotdevisible :"<<c;
    }
}

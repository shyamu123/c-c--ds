#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter the number a :";
    cin>>a;
    cout<<"Enter the number b :";
    cin>>b;
    c=a*b;
    cout<<"multiplication :"<<c;
    d=a+b;
    cout<<"\naddition :"<<d;
    if(c%d==0)
    {
        cout<<"\nd+a:"<<c;
    }
    else
    {
        cout<<"\nnotd+a:"<<c;
    }

    
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the number a:";
    cin>>a;
    cout<<"Enter the number b:";
    cin>>b;
    cout<<"Enter the number c:";
    cin>>c;

    if(a>=b & a>=c)
    {
        cout<<"the largest number a :"<<a;
    }
    if(b>=a & b>=c)
    {
        cout<<"the largest number b :"<<b;
    }
    if(c>=a & c>=b)
    {
        cout<<"the largest number c :"<<c;
    }
}
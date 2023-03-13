#include<iostream>
using namespace std;
int main()
{
    int a,b=0;
   /* cout<<"Enter the number :";
    cin>>a;
   */
    for(a=2;a<=10;a=a+2)
    {
        b=a+b;
        cout<<""<<a;
    }
    cout<<":"<<b;
}
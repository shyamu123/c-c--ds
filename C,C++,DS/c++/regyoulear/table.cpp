#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the table number :";
    cin>>b;

    for(a=1;a<=10;a++)
    {
        cout<<"\n"<<b<<"*"<<a<<"="<<a*b;
    }
}
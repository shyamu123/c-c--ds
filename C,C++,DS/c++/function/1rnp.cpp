#include<iostream>
using namespace std;
int main()
{
    int a;
    int shubham();
    a=shubham();
    if(a%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}
int shubham()
{
    int a;
    cout<<"enter the number a:";
    cin>>a;
    return a;
}
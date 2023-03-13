#include<iostream>
using namespace std;
int main()
{
    int a;
    int shubham(int);
    cout<<"enter the number a:";
    cin>>a;
    if(shubham(a)%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}
int shubham(int a)
{
    return a;
}
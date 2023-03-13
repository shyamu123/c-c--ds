#include<iostream>
using namespace std;
int main()
{
    void shubham(int);
    int a;
    cout<<"enter the a:";
    cin>>a;
    shubham(a);
}
void shubham(int x)
{
    if(x%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}
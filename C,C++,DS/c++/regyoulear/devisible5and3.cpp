#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number :";
    cin>>a;
    if(a%5==0 && a%3==0)
    {
        cout<<"devisible :"<<a;
    }
    else
    {
        cout<<"notdevisible :"<<a;
    }
}
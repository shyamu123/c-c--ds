#include<iostream>
using namespace std;
int main()
{
   
    int a,c=1,n;
    cout<<"Enter the number :";
    cin>>n;

    for(a=1;a<=n;a++)
    {
        c=a*c;
    }
    cout<<"factorial :"<<c;
}
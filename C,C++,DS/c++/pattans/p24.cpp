#include<iostream>
using namespace std;
int main()
{
    int a,b,c=5;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=c;b++)
        {
            cout<<"   ";
        }
        for(b=1;b<=a;b++)
        {
            cout<<" * ";
        }
        c--;
        cout<<"\n";
    }
}
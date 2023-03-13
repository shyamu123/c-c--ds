#include<iostream>
using namespace std;
int main()
{
    int a,b;
    for(a=1;a<=10;a++)
    {
        if(a%2==0)
        for(b=1;b<=5;b++)
        {
            cout<<" "<<a;
        }
        cout<<"\n";
    }
}
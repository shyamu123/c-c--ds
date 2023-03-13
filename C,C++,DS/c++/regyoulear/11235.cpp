#include<iostream>
using namespace std;
int main()
{
    int a,b=1,c=0,d=1;
    for(a=1;a<=10;a++)
    {
        cout<<" "<<d;
        b=c;
        c=d;
        d=b+c;
    }
}
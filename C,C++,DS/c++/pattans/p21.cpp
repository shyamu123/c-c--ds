#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c=64;
    for(a=1;a<=5;a++)
    {
        c=c+a;
        for(b=1;b<=a;b++)
        {
            cout<<" "<<c--;
        }
        cout<<"\n";
    }
}
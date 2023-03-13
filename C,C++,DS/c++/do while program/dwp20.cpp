#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    a=1;
    do
    {
        b=1;
        do
        {
            c++;
            if(c%2==1)
            {
                c=1;
            }
            else
            {
                c=0;
            }
            cout<<" "<<c;
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;
    }
    while(a<=5);
}
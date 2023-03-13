#include<iostream>
using namespace std;
int main()
{
    char c=65;
    int a,b;
    a=1;
    while(a<=5)
    {
        if(a%2==1)
        {
            b=1;
            while(b<=a)
            {
                cout<<" "<<char(c++);
                b++;
            }
        }
        else
        {
            b=1;
            while(b<=a)
            {
                cout<<" "<<char(c+++32);
                b++;
            }
        }
        cout<<"\n";
        a++;
    }
}
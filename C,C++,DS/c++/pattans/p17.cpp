#include<iostream>
using namespace std;
int main()
{
    char c=65;
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            
            if(b%2==0)
            {
                cout<<" "<<c++;
            }
            else
            {
                cout<<" "<<char(c+++32);
            }
        }
        cout<<"\n";
    }
}
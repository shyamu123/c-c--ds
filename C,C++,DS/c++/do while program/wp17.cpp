#include<iostream>
using namespace std;
int main()
{
    char c=65;
    int a,b;
    a=1;
    while(a<=5)
    {
        b=1;
        while(b<=a)
        {
            if(b%2==0)
            {
                cout<<" "<<char(c++);
            }
            else
            {
                cout<<" "<<char(c+++32);
            
            }
            b++;
        }
        cout<<"\n";
        a++;
    }
    
}
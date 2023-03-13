#include<iostream>
using namespace std;
int main()
{
    char a,b;
    cout<<"Enter the char :";
    cin>>a;

    if(a>=65 && a<=90)
    {
        b=a+32;
        cout<<"is convert to lowercase:"<<b;
    }
    else
    {
        b=a-32;
        cout<<"is convert to uppercase:"<<b;
    }
}
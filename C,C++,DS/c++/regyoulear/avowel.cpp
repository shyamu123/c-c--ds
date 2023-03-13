#include<iostream>
using namespace std;
int main()
{
    char q;
    cout<<"Enter the number :";
    cin>>q;
    if(q=='a' || q=='e' || q=='i' || q=='o' || q=='u')
    {
        cout<<"vowel";
    }
    else
    {
        cout<<"not vowel";
    }
}
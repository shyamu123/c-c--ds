#include <iostream>
using namespace std;
int main()
{
    int shyam(int);

    int a;
    cout<<"Enter the number A :";
    cin>>a;

    shyam(a);
}
int shyam(int x)
{

    cout<<"squre :"<<x * x;
    cout<<"\ncube :"<<x * x * x;
}
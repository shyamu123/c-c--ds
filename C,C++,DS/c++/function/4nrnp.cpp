#include <iostream>
using namespace std;
int shyam()
{
    int a, b = 0, n;

    cout<<"Enter the numbee number :";
    cin>>n;

    for (a = 1; n > 0; a++)
    {
        b = b * 10 + n % 10;
        n = n / 10;
    }
    cout<<"\n"<<b;
}
int main()
{
    shyam();
}
#include <iostream>
using namespace std;
int main()
{
    int a[128], b, n;
    int shyam(int, int, int);

    cout<<"Enter the decimal number : ";
    cin>>n;

    for (b = 0; n > 0; b++)
    {
        a[b] = n % 2;
        n = n / 2;
    }
    for (b = b - 1; b >= 0; b--)
    {
        cout<<""<<a[b],shyam;
    }
}
int shyam(int a, int b, int n)
{
    return n;
}
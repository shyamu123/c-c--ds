#include <iostream>
using namespace std;
int main()
{
  int a, b = 0, n;
  int shyam(int, int, int);

  cout<<"Enter the number :";
  cin>>n;

  for (a = 1; n > 0; a++)
  {
    b = b * 10 + n % 10;
    n = n / 10;
  }
  cout<<"\n"<<b,shyam;
}
int shyam(int a, int b, int n)
{
  return n;
}
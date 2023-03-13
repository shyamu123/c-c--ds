#include <iostream>
using namespace std;
int main()
{
  int a, b = 0, n;
  int shyam();
  a, b = 0, n = shyam();

  for (a = 1; n > 0; a++)
  {
    b = b * 10 + n % 10;
    n = n / 10;
  }
  cout<<"\n"<<b;
}
int shyam()
{
  int a, b, n;

  cout<<"Enter the number :";
  cin>>n;

  return n;
}
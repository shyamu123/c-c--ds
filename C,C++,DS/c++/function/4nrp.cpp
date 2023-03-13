#include <iostream>
using namespace std;
int main()
{
  int shyam(int, int, int);

  int a, b = 0, n;

  cout<<"Enter hte number :";
  cin>>n;

  shyam(a, b, n);
}
int shyam(int x, int y, int z)
{
  for (x = 1; z > 0; x++)
  {
    y = y * 10 + z % 10;
    z = z / 10;
  }
  cout<<"\n"<<y;
}
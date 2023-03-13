#include<iostream>
using namespace std;
int main()
{
    int a=1,b;
    lable1:
          if(a<=5)
          {
            b=1;
            lable2:
                    if(b<=a)
                    {
                        cout<<" "<<b;
                        b++;
                        goto lable2;
                    }
                    cout<<"\n";
                    a++;
                    goto lable1;
          }

}
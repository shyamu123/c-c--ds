#include<iostream>
using namespace std;
class shyam
{
    int a,b;
    public:
            shyam() {}
            shyam(int x,int y)
            {
                a=x;
                b=y;
            }
            void show()
            {
                cout<<"\n a:"<<a<<"";
                cout<<"\n b:"<<b<<"";
            }
            shyam operator-(shyam);
};
shyam shyam::operator-(shyam obb)
{
    shyam temp;
    temp.a=a-obb.a;
    temp.b=b-obb.b;
    return temp;
}
int main()
{
    shyam oba(10,20),obb(5,30),obc;
    oba.show();
    obb.show();
    obc=oba-obb;
    obc.show();
    return 0;
}
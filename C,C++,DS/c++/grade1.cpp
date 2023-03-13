#include<iostream>
using namespace std;
class student
{
    int m1,m2,m3,total,per;
    public:
    void set_m1(int a)
    {
       m1=a;
    }
    int get_m1()
    {
        return m1;
    }
      void set_m2(int b)
    {
        m2=b;
    }
    int get_m2()
    {
        return m2;
    }
      void set_m3(int c)
    {
        m3=c;
    }
    int get_m3()
    {
        return m3;
    }
    int total1()
    {
        total=m1+m2+m3;
        return total;
    }
    int per1()
    {
        per=total/3;
        return per;
    }
    int grade()
    {
        if(per>=90 && per<=100)
        {
            cout<<("\n grad=a");
        }
        else if(per>=70 && per<=80)
        {
            cout<<("\n grad=b");
        }
        else if(per>=60 && per<=70)
        {
            cout<<("\n grad=c");
        }
        else if(per>=50 && per<=60)
        {
            cout<<("\n grad=d");
        }
        else
        {
            cout<<("\n fail");
        }   
    }
}; 
int main()
{
    student shyamu;
    shyamu.set_m1(90);
    cout<<"\nm1 :"<<shyamu.get_m1();
    shyamu.set_m2(80);
    cout<<"\nm2 :"<<shyamu.get_m2();
    shyamu.set_m3(70);
    cout<<"\nm3 :"<<shyamu.get_m3();
    cout<<"\ntotal :"<<shyamu.total1();
    cout<<"\nper :"<<shyamu.per1();
    shyamu.grade();
}
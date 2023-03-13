#include<iostream>
using namespace std;
int main()
{
    int maths,physics,chemistry,total,per;

    cout<<"Enter the maths marks :";
    cin>>maths;
    cout<<"Enter the physics marks :";
    cin>>physics;
    cout<<"Enter the chemistry marks :";
    cin>>chemistry;

    total=maths+physics+chemistry;
    per=total/3;

    cout<<"\nmaths+physics+chemistry :"<<total;
    cout<<"\nnper :"<<per;

    if(per>=90 && per<=100)
    {
        cout<<"\n\ngrad :a++";
    }
    else if(per>=80 && per<=90)
    {
        cout<<"\n grad :a";
    }
    else if(per>=70 && per<=80)
    {
        cout<<"\n grad :b";
    }
    else if(per>=60 && per<=70)
    {
        cout<<"\n grad :c";
    }
    else if(per>=50 && per<=60)
    {
        cout<<"\n grad :d";
    }
    else
    {
        cout<<"\n fall ";
    }
}
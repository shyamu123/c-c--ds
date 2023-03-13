#include<iostream>
using namespace std;
int main()
{
    int rate,qty,amt,billamt;
    float gst,netbill,dis;
    cout<<"Enter the rate :";
    cin>>rate;
    cout<<"Enter the qty :";
    cin>>qty;

    amt=rate*qty;
    dis=amt*0.05;
    billamt=amt-dis;
    gst=billamt*0.18;
    netbill=billamt+gst;

    if(amt>10000)
    {
        dis=amt*10/100;
        billamt=amt-dis;
        gst=billamt*28/100;
        netbill=billamt+gst;
    }
    cout<<"\n\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill";

    cout<<"\n\t"<<rate;
    cout<<"\t"<<qty;
    cout<<"\t"<<amt;
    cout<<"\t"<<dis;
    cout<<"\t"<<billamt;
    cout<<"\t"<<gst;
    cout<<"\t"<<netbill;

    if(netbill>25000)
    {
        cout<<"\n you save"<<dis;
    }
}
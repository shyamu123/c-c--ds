#include<iostream>
int main()
{
    float rat=50,qty=200,amt=10000,dis=500,bill=9500,gst,net;
    gst=bill*0.18;
    net=bill+gst;

    std::cout<<"\trat\tqty\tamt\tdis\tbill\tgst\tnet";
    std::cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    std::cout<<"\n\t"<<rat;   
    std::cout<<"\t"<<qty;  
    std::cout<<"\t"<<amt;  
    std::cout<<"\t"<<dis;      
    std::cout<<"\t"<<bill;  
    std::cout<<"\t"<<gst;  
    std::cout<<"\t"<<net;  
}
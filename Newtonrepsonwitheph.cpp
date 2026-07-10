#include<iostream>
using namespace std;
double func(double x)
{
    return x*x*x*x-x-10;
}
double funcderivative(double x)
{
    return 4*x*x*x-1;
}
void newtonrepson(double a,double b,double eph)
{
    double fa = func(a);
    double fb = func(b);
    double x0;
    if(fa<0) fa = -fa;
    if(fb<0) fb= -fb;
    if(fa<fb){x0=fa;}
    else{x0=fb;}
    double x1;
    int itr =0;
    while(true)
    {
        x1=x0-(func(x0)/funcderivative(x0));
        if(abs(x1-x0)<=eph) break;
        cout<<"Step:"<<++itr<<"\t\t"<<"X0:"<<x0<<"\t\t"<<"X1:"<<x1<<endl;
        x0=x1;
    }
    cout<<"Root:"<<x1<<endl;
    cout<<"Iteration:"<<itr<<endl;
}
int main()
{
double a,b,eph;
cout<<"Enter the value of a and b:"<<endl;
cin>>a>>b;
cout<<"Enter the value of eph:"<<endl;
cin>>eph;
newtonrepson(a,b,eph);
}

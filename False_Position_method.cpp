#include<iostream>
#include<cmath>
using namespace std;

double func(double x)
{
    return x*x*x-x*x-2;
}

void False(double a,double b,double eph)
{
    if(func(a)*func(b)>=0)
    {
        cout<<"Wrong Initialization"<<endl;
        return;
    }

    double c;
    int itr=1;

    while(abs(b-a)>=eph)
    {
        c=((a*func(b))-(b*func(a)))
          /(func(b)-func(a));

        cout<<"a="<<a<<"\t\t"
            <<"b="<<b<<"\t\t"
            <<"c="<<c<<"\t\t"
            <<"f(a)="<<func(a)<<"\t\t"
            <<"f(c)="<<func(c)<<endl;

        if(func(c)==0.0)
            break;

        if(func(a)*func(c)>=0)
            a=c;
        else
            b=c;

        itr++;
    }

    cout<<"Root:"<<c<<endl;
    cout<<"Iteration:"<<itr<<endl;
}

int main()
{
    double a,b;

    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;

    False(a,b,0.008);

    return 0;
}

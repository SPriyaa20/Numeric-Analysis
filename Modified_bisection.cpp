#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    return x*x*x-2*x*x-x+2;
}
void modified_bisection(double a,double b,int n)
{
    double fa,fb,xr,fxr;
    for(int i=1;i<n;i++)
    {
        fa=f(a);
        fb=f(b);
        xr=(a*fabs(fb)+b*fabs(fa))/(fabs(fa)+fabs(fb));
        fxr=f(xr);
        cout<<""<<i<<" "<<a<<" "<<b<<" "<<xr<<" "<<fxr<<endl;
        if(fxr==0)
            break;
        else if(fa*fxr>0)
            a=xr;
            else
            b=xr;
    }
     cout<<"Root: "<<xr<<endl;
}
int main()
{
    double a,b,n;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"Enter the number of iteration:";
    cin>>n;
    modified_bisection(a,b,n);
    return 0;
}

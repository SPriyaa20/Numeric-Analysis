#include<iostream>
using namespace std;
double func(double x)
{
    return x*x*x-x*x-2;
}
void bisection(double a,double b,double eph)
{
   if(func(a)*func(b)>=0)
   {
       cout<<"Wrong initialization"<<endl;
   }
   double c;
  int itr =1;
  while(b-a>=eph)
  {
     c= (a+b)/2;
     cout<<"a="<<a<<"\t\t"
     <<"b="<<b<<"\t\t"
     <<"c="<<c<<"\t\t"
     <<"f(a)="<<func(a)<<"\t\t"
     <<"f(c)="<<func(c)<<endl;
     if(func(c)==0.0 ) break;
     if (func(a)*func(c)>=0)a=c;
     else b=c;
    itr++;

  }
  cout<<"Root: "<<c<<endl;
  cout<<"Iteration:"<<itr<<endl;

}
int main()
{
    double a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    bisection(a,b,0.008);
    return 0;
}

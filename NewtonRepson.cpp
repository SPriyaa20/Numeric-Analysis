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
void newtonrepson(double a,double b)
{
    double x0;
  double fa=func(a);
  double fb= func(b);
  if(fa<0)fa=-fa;
  if(fb<0)fb= -fb;
  if(fa<fb)
  {
      x0=a;
  }
  else
  {
        x0=b;
  }
  double x1;
  int itr=1;
  while(true)
  {

    x1=x0-(func(x0)/funcderivative(x0));
if(x0==x1)break;
      x0=x1;
    itr++;

  }
  cout<<"root:"<<x1<<endl;
  cout<<"Iteration:"<<itr<<endl;

}
int main()
{
    double a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    newtonrepson(a,b);
    return 0;
}

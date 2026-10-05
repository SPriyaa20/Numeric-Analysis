#include<iostream>
using namespace std;
int main()
{
    int n;
    double x[10],y[10],xp,term,result=0;
    cout<<"Enter number of data point:";
    cin>>n;
    cout<<"Enter the value of X and Y:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    cout<<"Enter the value of X to find Y:";
    cin>>xp;
    for(int i=0;i<n;i++)
    {
        term=y[i];
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                term=term*(xp-x[j])/(x[i]-x[j]);
            }
        }
        result+=term;
    }
    cout<<"Inter polation value of y is "<<result;
}

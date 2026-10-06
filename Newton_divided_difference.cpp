#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    double x[10],y[10][10],term,result,value;
    cout<<"Enter number of data points:"<<endl;
    cin>>n;
    cout<<"Enter X values:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Enter Y values:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>y[i][0];
    }
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {

            y[i][j]=(y[i+1][j-1]-y[i][j-1])/(x[i+j]-x[i]);
        }
    }
    cout<<"Enter the value of x to find f(x):";
    cin>>value;
    result=y[0][0];
    for(int j=1;j<n;j++)
    {
        term=y[0][j];
        for(int i=0;i<j;i++)
        {
            term=term*(value-x[i]);
        }
        result=result+term;
    }
    cout<<"Value:"<<value<<"\nResult:"<<result;
    return 0;

}

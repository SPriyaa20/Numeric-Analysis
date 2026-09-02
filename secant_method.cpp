#include<iostream>
#include<cmath>
using namespace std;

double func(double x)
{
    return x*x*x - x*x - 2;
}

void secant(double x0, double x1, double eph)
{
    double x2;
    int itr = 1;

    while(true)
    {
        if(func(x1) - func(x0) == 0)
        {
            cout << "Divide by zero error." << endl;
            return;
        }


        x2 = x1 -(func(x1) * (x1 - x0)) / (func(x1) - func(x0));



        cout << "Iteration " << itr << ": "
             << "x0=" << x0 << "\t\t"
             << "x1=" << x1 << "\t\t"
             << "x2=" << x2 << "\t\t"
             << "f(x2)=" << func(x2) << endl;

        if(abs(x2 - x1) < eph || abs(func(x2)) < eph) break;

        x0 = x1;
        x1 = x2;
        itr++;
    }

    cout << "Root: " << x2 << endl;
    cout << "Iteration: " << itr << endl;
}

int main()
{
    double x0, x1;
    cout << "Enter initial guesses (x0 and x1): " << endl;
    cin >> x0 >> x1;
    secant(x0, x1, 0.008);
    return 0;
}

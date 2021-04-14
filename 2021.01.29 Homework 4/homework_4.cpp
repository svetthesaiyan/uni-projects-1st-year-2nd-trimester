// Да се напише програма, която въвежда стойности на реалните променливи a, b, c и d, след което разменя стойностите на a и b и на c и d съответно.
#include <iostream>
#include <iomanip>
using namespace std;
void swapi(double* x, double* y)
{
    double work=*x;
    *x=*y;
    *y=work;
    return;
}
int main()
{
    cout<<"a, b, c, d= ";
    double a, b, c, d;	cin>>a>>b>>c>>d;
    cout<<setprecision(2)<<setiosflags(ios::fixed);
    cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<d<<endl;
    swapi(&a, &b);
    swapi(&c, &d);
    cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<d<<endl;

    system("pause");
    return 0;
}

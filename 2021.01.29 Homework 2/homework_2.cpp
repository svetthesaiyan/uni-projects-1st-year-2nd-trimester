// Да се напише програма, която въвежда стойности на естествените числа a, b, c и d и намира и извежда най-големият общ делител на числата a и b, след това на c и d и накрая на a, b, c и d.
#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    while(x!=y)
        if(x>y)
        	x=x-y;
        else
        	y=y-x;
    return x;
}
int main()
{
    cout<<"a, b, c, d= ";
    int a, b, c, d;	cin>>a>>b>>c>>d;
    if(!cin||a<1||b<1||c<1||d<1)
    {
        cout<<"Error!"<<endl;
        return 1;
    }
    int r=gcd(a, b);
    cout<<"gcd{"<<a<<", "<<b<<"}= "<<r<<endl;
    int s=gcd(c, d);
    cout<<"gcd{"<<c<<", "<<d<<"}= "<<s<<endl;
    cout<<"gcd{"<<a<<", "<<b<<", "<<c<<", "<<d<<"}= "<<gcd(r, s)<<endl;

    system("pause");
    return 0;
}

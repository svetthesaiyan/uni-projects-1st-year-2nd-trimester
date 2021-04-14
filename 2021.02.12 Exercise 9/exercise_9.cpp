// Като се използва рекурсивната дефиниция на функцията за степенуване да се напише програма, която по дадени a реално и k – цяло число, намира стойността на a^k.
#include <iostream>
using namespace std;
double pow(double, int);
int main()
{
	double a;
	cout<<"a= ";	cin>>a;
	if(!cin)
	{
		cout<<"Error"<<endl;
		return 1;
	}
	int k;
	cout<<"k= ";	cin>>k;
	if(!cin)
	{
		cout<<"Error"<<endl;
		return 1;
	}
	cout<<"pow{"<<a<<", "<<k<<"}= "<<pow(a, k)<<endl;
	return 0;
}
double pow(double x, int n)
{
	if(n==0)
		return 1;
	else
		if(n>0)
			return x*pow(x, n-1);
		else
			return 1.0/pow(x, -n);
}

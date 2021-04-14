// Да се напише рекурсивна програма, която намира най-големия общ делител на две естествени числа.
#include <iostream>
using namespace std;
int gcd(int, int);
int main()
{
	int a, b;
	cout<<"a= ";	cin>>a;
	cout<<"b = ";	cin>>b;
	if(!cin||a<1||b<1)
	{
		cout<<"Error!"<<endl;
		return 1;
	}
	cout<<"Най-големият общ делител на числата{"<<a<<", "<<b<<"} е= "<<gcd(a, b)<<endl;
	return 0;
}
int gcd(int a, int b)
{
	if(a==b)
		return a;
	else
		if(a>b)
			return gcd(a-b, b);
		else
			return gcd(a, b-a);
}

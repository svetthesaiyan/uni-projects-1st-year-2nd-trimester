// Да се напише програма, която въвежда последователно n числа, след което ги извежда в обратен ред.
#include <iostream>
using namespace std;
int main()
{
	double x[100];
	cout<<"n= ";
	int n, i;	cin>>n;
	if(!cin)
	{
		cout<<"Error, Bad input!"<<endl;
		return 1;
	}
	if(n<0||n>100)
	{
		cout<<"Incorrect input!"<<endl;
		return 1;
	}
	for(i=0; i<=n-1; i++)
	{
		cout<<"x["<<i<<"]= ";
		cin>>x[i];
		if(!cin)
		{
			cout<<"Error, Bad Input!"<<endl;
			return 1;
		}
	}
	for(i=n-1; i>=0; i--)
		cout<<x[i]<<endl;
	return 0;
}

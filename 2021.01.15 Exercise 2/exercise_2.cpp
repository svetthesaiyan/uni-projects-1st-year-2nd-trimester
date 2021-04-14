// Да се намери разликата между минималния и максималния елемент в едномерен масив от n елемента.
#include <iostream>
#include <math.h>
const int M=100;
using namespace std;
int main()
{
	int a[M], n, min=1000, max=0;
	cout<<"Въведи n=";	cin>>n;

	for(int s=0; s<n; s++)	cin>>a[s];

	for(int s=1; s<n; s++)
	{
		if(a[s]<min)
			min=a[s];
		if(a[s]>max)
			max=a[s];
	}
	cout<<"Разликата max-min e= "<<max-min<<" ";
	return 0;
}
// This dumb mf program won't work properly for whatever reason

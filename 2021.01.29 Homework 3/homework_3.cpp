// Да се напише програма, която въвежда елементи на масив от клавиатурата и с функция проверява дали дадено число х се съдържа в масива.
#include <iostream>
using namespace std;
int broj(int a[], int n, int x)
{
	int br=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]==x)
			br++;
	}
	return br;
}
void main()
{
	int arr[20];
	int x, br;
	for(int i=0; i<20; i++)
	{
		cout<<"Елемент ["<<i+1<<"] = ";		cin>>arr[i];
	}
	cout<<"Търсено число X= ";		cin>>x;
	br=broj(arr, 20, x);
	if(br==0)
		cout<<"X не е намерено.";
	else
		cout<<"Намерено "<<br<<" пъти "<< endl;
}

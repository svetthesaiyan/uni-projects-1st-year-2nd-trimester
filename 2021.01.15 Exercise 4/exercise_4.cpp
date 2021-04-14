// Да се напише програма, която разделя четните и нечетните елементи на един целочислен масив с 10 елемента в два отделни масива.
#include<iostream>
using namespace std;
int main()
{
	int a[10], odd[10], even[10];
	int k=0, j = 0;
	for (int i=0; i<10; i++)
	{
		cout <<"a["<<i<<"]=";	cin >> a[i];

	}
	for (int i=0; i<10; i++)
	{
		if (a[i]%2==0)
		{
			even[k]=a[i];
			k++;
		}
		else
		{
			odd[j]=a[i];
			j++;
		}
	}
	for(int i=0; i<k; i++)
		cout<<even[i]<<"  ";
		cout<<endl;
	for (int i=0; i<j; i++)
		cout<<odd[i]<<"  ";
	return 0;
}

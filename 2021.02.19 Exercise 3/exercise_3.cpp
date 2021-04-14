// Да се сортира масив от 10 случайно генерирани цели числа в интервала от 0 до 100 във възходящ ред като се използва сортиране чрез вмъкване. Да се напишат функции за генериране на числата, извеждане на елементите на масива и за сортиране.
#include <iostream>
#include <ctime>
using namespace std;
void InsertionSort(int A[], int n)
{
	int k, index;
	for(int j=1; j<n; j++)
	{
		index=A[j];
		k=j;
		while(k>0&&(A[k-1]>index))
		{
			A[k]=A[k-1];
			k=k-1;
		}
		A[k]=index;
	}
}
void read(int numbers[], int array_size)
{
	srand(static_cast<unsigned>(time(NULL)));
	for(int i=0; i<array_size; i++)
	{
		numbers[i]=rand()%(100);
	}
}
void print(int numbers[], int array_size)
{
	for(int i=0; i<array_size; i++)
	{
		cout<<numbers[i]<<" ";
		cout<<endl;
	}
}
int main ()
{
	int a[10];
	read(a, 10);
	cout<<"Изход преди сортиране: "<<endl;
	print(a, 10);
	InsertionSort(a,10);
	cout<<"Изход след сортиране: "<<endl;
	print(a, 10);

	system("pause");
	return 0;
}

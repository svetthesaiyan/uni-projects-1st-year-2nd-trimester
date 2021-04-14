#include <iostream>
using namespace std;

void VuvexdashtMasiv(int arr[], int size)	//а) подточка
{
	for(int i=0; i<size; i++)
	{
		cout<<"Въведи "<<i+1<<" елемент в масива: ";	cin>>arr[i];
	}
}	//край на а) подточка

void IzvexdashtMasiv(int arr[], int size)	//б) подточка
{
	cout<<"Изход: "<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}	//край на б) подточка

double SUM(int arr[], int size)		//в) подточка
{
	double sum=0.0;
	for(int i=0; i<size; i++)
	{
		sum+=arr[i];
	}
	return sum;
}	//край на в) подточка

void Nechetno(int arr[], int size)		//г) подточка
	{
	int k=0;
	for(int i=0; i<size; i++)
	{
		if(arr[i]%3==0)
			k++;
	}
	}	//край на г) подточка

double DobaviKumMax(int arr[], int size)	//д) подточка
{
	int max=arr[0];

	cout<<"Максимално число или числа + 20: "<<endl;
	for(int i=0; i<size; i++)
	{
		if(max<=arr[i])
		{
			cout<<arr[i]+20<<" ";
		}
	}
	return max;
}	//край на д) подточка

int main()	//краен резултат
{
	const int size=5;
	int arr[size];
	VuvexdashtMasiv(arr, size);
	IzvexdashtMasiv(arr, size);
	Nechetno(arr, size);

	cout<<"Сумата на въведените елементи от масива: "<<SUM(arr, size)<<endl;
	cout<<"Нечетните числа са: "<<DobaviKumMax(arr, size)<<endl;
	DobaviKumMax(arr, size);
	cout<<endl;

	system("pause");
	return 0;
}

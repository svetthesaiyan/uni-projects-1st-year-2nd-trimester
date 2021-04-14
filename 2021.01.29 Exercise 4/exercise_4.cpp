// Създайте програма с функция която проверява дали масив от 10 цели числа съдържа 0.
#include <iostream>
using namespace std;
void func1(int* n); //declaration
int main()
{
	int num[11];
	cout<<"Въведете 10 числа: "<<endl;
	for(int i=0; i<=10; i++)
	{
		cin>>num[i];
	}
	func1(num);
	return 0;
}
void func1(int* n) //definition
{
	int br=0;
	for(int i=0; i<11; i++)
	{
		if (n[i]==0)
			br++;
	}
	if (br>0)
		cout<<"Масивът от числа съдържа 0 - "<<br<<" пъти"<<endl;
	else
		cout<<"Масивът не съдържа 0 "<<endl;
}

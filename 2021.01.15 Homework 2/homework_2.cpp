// Да се напише програма прочитаща от клавиатурата 10 цели числа елементи на масив и извеждаща на екрана сумата на четните елементи на масива.
#include <iostream>
using namespace std;
int main()
{
	int M[10]; // масив за съхранение на елементите
	int i, s = 0; // променлива за сумата
	for(int i=0; i<10; i++)
	{
		cout<<"Въведете число:";	cin>>M[i];
	}
	for(i=0; i<10; i++)
	{
		if(M[i]%2==0)
			s=s+M[i];
	}
	cout<<"Сумата на четните е: "<<s<<endl;
	return 0;
}

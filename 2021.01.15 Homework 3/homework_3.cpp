// Да се напише програма прочитаща от клавиатурата цените на 10 стоки в един магазин, за всяка стока да се начисли 5% отстъпка и да се изведат на екрана новите цени на стоките.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
		double A[10]; // масив за цените
		for(int i=0; i<10; i++)
		{
			cout<<"Въведете цена на стока:";	cin >> A[i];
			A[i]=A[i]-A[i]*0.05; // начисляване на 5% отстъпка
		}
		for(int i=0; i<10; i++)
		{
			cout<<"Нова цена:"<<fixed<<setprecision(2)<<A[i]<<endl;
		}
		return 0;
	}

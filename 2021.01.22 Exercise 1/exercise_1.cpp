// Да се напише програма, която заделя динамична памет за указател към целочислен тип, присвоява 15 на променливата, към която сочи указателя, извежда стойността на указателя и на променливата, към която сочи указателя и освобождава заделената динамична памет.
#include <iostream>
using namespace std;
int main()
{
	int* p=new int;
	*p=15;
	cout<<"p= "<<p<<endl;
	cout<<"*p= "<<*p<<endl;
	delete p;

	return 0;
	system("pause");
}

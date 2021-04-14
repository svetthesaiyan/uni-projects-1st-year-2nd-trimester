// 4.	Да се напише програма, която създава динамичен масив от цели числа, извежда го на екрана и освобождава заделената динамична памет.
#include<iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "Размер на масива= ";	cin >> n;
	}
	while (n < 1);
	int* a = new int[n];
	for (int i = 0; i <= n - 1; i++)
	{
		*(a + i) = i;
		cout << *(a + i) << " ";
	}
	cout << endl;
	delete[] a;

	system("pause");
	return 0;
}

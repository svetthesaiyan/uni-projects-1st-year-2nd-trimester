/* Да се напише програма, в която чрез отделни функции:
• се въвеждат елементи на едномерен целочислен масив;
• сортира се масива във възходящ ред;
• извеждат се сортираните елементи.
*/
#include <iostream>
using namespace std;
//Функция за въвеждане елементи на едномерен целочислен масив
void input(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a [" << i << "] =";
		cin >> *(a + i);
	}
}
//Функция за извеждане елементи на едномерен целочислен масив
void output(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << "a [" << i << "] =" << *(a + i) << endl;
}
//Функция за сортиране по метод на мехурчето чрез използване на указатели.
void sort(int* array, int num)
{
	int i, j;
	int temp; /* Used in swopping array values */
	for (i = 0; i < num; i++)
		for (j = 0; j < num - 1; j++)
			if (*(array + j) > *(array + j + 1))
			{
				temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
			}
}
int main()
{
	const int N = 50; int n;
	int a[N];
	do
	{cout << "n = "; cin >> n;
	} while (n < 1 || n>50);
	input(a, n); // ПП за въвеждане
	sort(a, n);
	cout << "Sortiran masiv : " << endl;
	output(a, n);
}

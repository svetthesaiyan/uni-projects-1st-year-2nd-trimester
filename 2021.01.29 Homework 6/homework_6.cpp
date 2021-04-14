// Да се напише функция, която получава параметри два масива от реални числа и връща сумата от елементите (числата),  които се срещат само в единия от двата масива.
#include <iostream>
#include <ctime>
using namespace std;
double SumOfUniqueElements(double arr1[], const int size1,
	double arr2[], const int size2)
{
	double sum = 0.0;
	for (int i = 0; i < size1; i++)
	{
		bool f = true;
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i] == arr2[j])
				f = false;
		}
		if (f) sum = sum + arr1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		bool f = true;
		for (int j = 0; j < size1; j++)
		{
			if (arr2[i] == arr1[j])
				f = false;
		}
		if (f) sum = sum + arr2[i];
	}
	return sum;
}
void PrintArray(double arr[], const int size, const char* S)
{
	cout << S;
	for (int i = 0; i < size; ++i) cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n1 = 10; const int n2 = 15;
	double A[n1]; double B[n2];
	// генерираме n числа 0..99
	for (int i = 0; i < n1; ++i)
		A[i] = (rand() % 100000) / (rand() % 100 + 1.0);
	for (int i = 0; i < n2; ++i)
		B[i] = (rand() % 100000) / (rand() % 100 + 1.0);
	PrintArray(A, n1, "Array A now: ");
	PrintArray(B, n2, "Array B now: ");
	cout << "SumOfUniqueEl = " <<
		SumOfUniqueElements(A, n1, B, n2) << endl;
	return 0;
}

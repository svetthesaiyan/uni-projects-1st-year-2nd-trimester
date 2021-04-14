/* Напишете рекурсивна функция, която:
a) извежда цифрите на числото в обратен ред.
б) извежда цифрите на числото отляво надясно.
в) създава число със същите цифри в обратен ред.
*/
// а) извежда цифрите на числото в обратен ред
#include <iostream>
using namespace std;
void Digits(int n)
{
	if (n > 0)
	{
		cout << n % 10;
		Digits(n / 10);
	}
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	Digits(n);
	return 0;
}
/*
б) извежда цифрите на числото отляво надясно.
#include <iostream>
using namespace std;
void Digits(int n)
{
	if (n > 0)
	{
		Digits(n / 10);
		cout << n % 10;
	}
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	Digits(n);
	return 0;
}
в) създава число със същите цифри в обратен ред.
#include <iostream>
using namespace std;
int m = 0;
void Digits(int n)
{
	if (n > 0)
	{m = m * 10 + (n % 10);
	 Digits(n / 10);}
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	Digits(n);
	cout << m << endl;
	return 0;
}
*/




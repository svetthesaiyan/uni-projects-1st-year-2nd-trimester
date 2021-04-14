// Програма, която отпечатва таблицата за умножение на двойките числа от 1 до 9.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	for (int i=1; i<=9; i++)
	{
		for (int j=1; j<=9; j++)
			cout<<setw(3)<<i*j<<" ";
		cout<<endl;
	}
}


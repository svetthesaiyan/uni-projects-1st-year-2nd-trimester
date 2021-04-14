// Да се напише програма, която разменя местата на минималния и максималния елемент на целочислена матрица с размер 3х3.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[3][3];
	int imin = 0, jmin = 0, imax = 0, jmax = 0;
	int temp;
	cout << "Vavedi elementite na masiva:" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[i][j] > a[imax][jmax])
			{
				imax = i;
				jmax = j;
			}
			else
				if (a[i][j] < a[imin][jmin]) {
					imin = i;
					jmin = j;
				}
	temp = a[imin][jmin];
	a[imin][jmin] = a[imax][jmax];
	a[imax][jmax] = temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	return 0;
}

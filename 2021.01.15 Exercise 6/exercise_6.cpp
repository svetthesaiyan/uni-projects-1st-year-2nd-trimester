#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int A[3][5];
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
		{
			cout << "Mat [" << i << "," << j << "]=";
			cin >> A[i][j];
		}
	int B[3][5];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			B[i][j] = (A[i][j]) * 3;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			cout << B[i][j] << "\t";
	cout << endl;
}

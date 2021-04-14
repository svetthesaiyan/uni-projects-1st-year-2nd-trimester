// Да се напише програма, която въвежда от клавиатурата цялото число N > 0, след това въвежда още N числа и отпечатва най-голямото от тези въведени N на брой числа.
#include <iostream>
using namespace std;
int main()
{
	int N;	double A, M;
	cin>>N;	cin>>M;

	for(int i=2; i<=N; i++)
	{
		cin>>A;
		if(A>M)
			M=A;
	}
	cout<<M;
}

// Напишете рекурсивна функция, която проверява дали в записа на дадено число се съдържа дадена цифра.
#include <iostream>
using namespace std;
void DigitK(int n, int k)
{
	if((n%10)==k)
		cout<<"Yes.";
	else
		if(n==0)
			cout<<"No.";
		else DigitK(n/10, k);
}
int main(void)
{
	int n, k;
	cout<<"n= ";	cin>>n;
	do
	{
		cout<<"k= ";	cin>>k;
	}
	while((k<0)||(k>9));

	DigitK(n, k);
	return 0;
}

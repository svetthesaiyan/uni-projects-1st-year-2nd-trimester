// Дадени са редицата от цели числа a0, a1, …, an-1 (n ≥ 1)и цялото число x. Да се напише програма, която намира колко пъти x се съдържа в редицата. В случая релацията r е операцията ==. Налага се всеки елемент на редицата да бъде сравнен с x. Тя описва индуктивен цикличен процес.
#include <iostream>
using namespace std;
int main()
{
	int a[20];
	cout<<"n= ";

	int n; cin>>n;
	if(!cin)
	{
		cout<<"Error, Bad input!"<<endl;
		return 1;
	}
	if(n<1||n>20)
	{
		cout<<"Incorrect input!"<<endl;
		return 1;
	}

	int i;
	for(i=0; i<=n-1; i++)
	{
		cout<<"a["<<i<<"]= ";	cin >> a[i];
		if (!cin)
		{
			cout<<"Error, Bad input!"<<endl;
			return 1;
		}
	}

	int x;
	cout<<"x= ";	cin>>x;
	if (!cin)
	{
		cout<<"Error, Bad input!"<<endl;
		return 1;
	}

	int br = 0;
	for(i=0; i<=n-1; i++)
		if (a[i]==x) br++;
	cout <<"There's 2 instances of numbers equal to X="<<br<<endl;
	return 0;
}

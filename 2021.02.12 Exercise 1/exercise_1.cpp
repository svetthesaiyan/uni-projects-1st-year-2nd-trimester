// Да са напише рекурсивна функция, която намира факториела на въведено естествено число n. Факториел : 4! = 1.2.3.4=24
// Тук тривиалният случай е (n==0)||(n==1). Тогава функцията трябва да върне стойност 1. В противен случай (ако n>1) изчисляването на факториела ще изисква рекурсивно обръщение.
#include <iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int n;
	cout<<"n= ";	cin>>n;

	if(!cin||n<0)
	{
		cout<<"Error!"<<endl;
		return 1;
	}
	cout<<n<<"!="<<fact(n)<<endl;

	system("pause");
	return 0;
}




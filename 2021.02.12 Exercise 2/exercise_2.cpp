// Друг класически пример за рекурсия е пресмятането числата на Фибоначи. Това са числата от редицата 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// Всеки следващ член на тази редица е сума на предишните два члена
#include <iostream>
using namespace std;
int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
		else
			return fib(n-1)+fib(n-2);
}
int main()
{
	double a;
	cout<<"Въведи големина на редицата: ";	cin>>a;

	if(!cin||a<0)
	{
		cout<<"Error!"<<endl;
		return 1;
	}
	cout<<fib(a)<<endl;

	system("pause");
	return 0;
}

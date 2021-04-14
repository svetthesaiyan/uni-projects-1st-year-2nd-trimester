// Да се изведат елементите на масив a {1,2,3,4,5} чрез индексни променливи и чрез указатели:
#include <iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5}; int i;

	for(i=0; i<5; ++i)
		cout<<a[i]<<" "; // извежда 1 2 3 4 5
	cout<<endl;

	for(i=0; i<5; ++i)
		cout<<*(a+i)<<" "; // извежда 1 2 3 4 5
	cout<<endl;

	return 0;
	system("pause");
}

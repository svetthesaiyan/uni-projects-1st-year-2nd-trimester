// Програма за взаимно рекурсивни функции.
// Двете функции rec1() и rec2() се извикват взаимно с намаляваща стъпка 2.
#include <iostream>
using namespace std;
void rec2(int b);
void rec1(int a)
{
	if(a>0)
		rec2(a-2);
	cout<<"a="<<a<<" ";
}
void rec2(int b)
{
	if(b>0)
		rec1(b-2);
	cout<<"b="<<b<<" ";
}
int main()
{
	rec1(20);
	return 0;
}

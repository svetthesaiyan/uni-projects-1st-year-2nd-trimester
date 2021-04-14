// Програма, която демонстрира предаване на параметрите на функцията чрез псевдоними. Удвояване на три числа.
#include <iostream>
using namespace std;
void duplicate(int& a, int& b, int& c) //параметрите са псевдоними
{
	a*=2;
	b*=2;
	c*=2;
}
int main()
{
	int x=1, y=3, z=7; // може да добавим въвеждане на тези три числа
	duplicate(x, y, z);
	cout<<"x="<<x<<", y="<<y<<", z="<<z;

	return 0;
}

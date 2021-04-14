// Да се напише програма, в която: да се дефинира функция за намиране на средното аритметично на три цели числа; да се въвеждат три цели числа и да се извежда средното им аритметично.
#include <iostream>
using namespace std;
double average(int n1, int n2, int n3)
{
	return (n1+n2+n3)/3.0;
}
int main()
{
	int x, y, z;
	cout <<"Въведете три цели числа: ";	cin>>x>>y>>z;
	cout <<"Средно аритметично на тези числа: "<<average(x, y, z)<<endl;

	system("pause");
	return 0;
}

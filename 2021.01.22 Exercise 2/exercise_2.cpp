// Да се дефинира променлива от тип указател към int и променлива от тип int, която да има стойност 10. Да се присвои на указателя стойността на целочислената променливата и да се изведе стойността на променливата, към която сочи указателят. След това да се увеличи стойността на променливата, към която сочи указателят (чрез указателя) с единица и да се изведе новата стойност.
#include <iostream>
using namespace std;
int main()
{
	int* p;	int x=10;
	p=&x;
	cout<<"x= "<<*p<<endl; //извежда 10

	*p=*p+1; // увеличава x с 1
	cout<<"x= "<<x<<endl; //извежда 11

	return 0;
	system("pause");
}

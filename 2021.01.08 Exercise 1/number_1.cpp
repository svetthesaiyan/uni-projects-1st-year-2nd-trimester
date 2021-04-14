// Да се напише програма, която въвежда радиуса на окръжност и намира и извежда дължината на окръжността и лицето на кръга с дадения радиус. Използва се константа.
#include <iostream>
using namespace std;
const double Pi=3.14159265359;
int main()
{
	double r, C, S;

	cout<<"Въведете радиус: "<<endl;	cin>>r;

	C=2*Pi*r;	S=Pi*r*r;
	cout<<"Дължината е= "<<C<<endl;		cout<<"Лицето е= "<<S<<endl;

	system("pause>0");
	return 0;
}

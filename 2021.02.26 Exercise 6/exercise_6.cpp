// Да се изведе пълното име при  зададени име и фамилия като се използва разделител интервал и функцията за конкатенация на низове.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char first_name[20]="Svetoslav";
	char family_name[20]="Slavov";
	char name[45]="";

	strcat(name, first_name);
	strcat(name, " ");
	strcat(name, family_name);

	cout<<"Your name is: "<<name<<endl;

	system("pause");
	return 0;
}

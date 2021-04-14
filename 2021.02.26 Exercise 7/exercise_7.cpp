/* Да се напише програма, в която са дефинирани низове със стойности ТМ и Телематика.
 * Във вторият низ да се копира стойността на първия низ като се използва вградената функция за копиране.
 * Да се отпечатат стойностите на низовете преди и след копирането.
 */
#include <iostream>
#include <cstring>
using namespace std;
int find(char seq[][15], int count, char* pattern)
{
	int i;
	for(i=0; i<count; i++)
		if(!strcmp(pattern, seq[i]))
			return 1;
	return 0;
}

int main()
{
	char string1[]="TM";
	char string2[]="Телематика";

	cout<<"Преди копирането: "<<endl;
	cout<<"Низ 1: "<<string1<<endl;
	cout<<"Низ 2: "<<string2<<endl;

	strcpy(string2, string1);
	cout<<"След копирането: "<<endl;
	cout<<"Низ 1: "<<string1<<endl;
	cout<<"Низ 2: "<<string2<<endl;

	system("pause");
	return 0;
}




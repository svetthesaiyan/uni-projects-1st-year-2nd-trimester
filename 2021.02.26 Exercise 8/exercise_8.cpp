/* Да се декларират 3 символни низа с дължина 15 символа за въвеждане на име, презиме и фамилия на студент.
 * 1.
 * a) Да се конкатенират имената в нов низ.
 * б) Да се изведе получения низ и неговата дължина.
 * 2. Да се изведат инициалите на студента.
 * 3. Да се преброи колко пъти символът ‘a’ се среща в пълното име на студента
 */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char first_name[15];
	char middle_name[15];
	char family_name[15];
	char name[48];

	cout<<"Enter your first name: ";	cin>>first_name;
	cout<<"Enter your middle name: ";	cin>>middle_name;
	cout<<"Enter your family name: ";	cin>>family_name;

	strcpy(name, first_name);
	strcat(name, " ");
	strcat(name, middle_name);
	strcat(name, " ");
	strcat(name, family_name);
	strcat(name, " ");
	// край на 1а)
	cout<<"Your full name is: "<<name<<endl;

	int n=strlen(name);
	cout<<"You have "<<n<<" letters in your full name."<<endl;
	// край на 1б)
	cout<<"Your initials are: "<<first_name[0]<<'.'<<middle_name[0]<<'.'<<family_name[0]<<'.'<<endl;
	// край на 2.
	int br=0;
	for(int i=0; i<=n; i++)
		if(name[i]=='a')
			br++;
	cout<<"You have "<<br<<" A's in your full name."<<endl;
	// край на 3.

	system("pause");
	return 0;
}




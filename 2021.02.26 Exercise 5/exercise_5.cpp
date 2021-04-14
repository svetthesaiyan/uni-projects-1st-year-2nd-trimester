// Да се състави програма, която намира всички цифри в даден низ, с дължина не повече от 80 символa, и ги замества с ‘X’.
// Примерен вход: sf123sdfdf3    Примерен изход: sfXXXsdfdfX
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s[80];
	int i=0;
	cout<<"Enter a bunch of garbled text here: "<<endl;
	cin.getline(s, 80);
	while (i<strlen(s))
	{
		if(isdigit(s[i]))
			s[i]='X';
		i++;
	}
	cout<<"Here's your garbled text but all of the numbers are replaced by X's: "<<endl;
	cout<<s<<endl;

	system("pause");
	return 0;
}

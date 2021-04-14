// Да се състави програма, която намира всички цифри в даден низ ( >=1) и ги замества със същите цифри намалени с единица.
/* Примерен вход: adfp123076с        Примерен изход: adfp012065с
Тук ползваме вградената библиотечна функция isdigit
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[] = "hj;pq910js4";
    cout << "The digit in the string are:" << endl;
    for (int i=0; i<strlen(str); i++)
    {
        if (isdigit(str[i]))
            cout << str[i] << " ";
    }
    return 0;
}
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s[80];
	int i=0;
	cout<<"Enter a bunch of garbled text with numbers here: "<<endl;
	cin.getline(s, 80);

	while(i<strlen(s))
	{
		if(isdigit(s[i])&&s[i]!='0')	// тяло, с което открива точно числата
			s[i]=s[i]-1;
		i++;
	}
	cout<<"Here's your garbled text but all of the numbers are subtracted by 1: "<<endl;
	cout<<s<<endl;

	system("pause");
	return 0;
}

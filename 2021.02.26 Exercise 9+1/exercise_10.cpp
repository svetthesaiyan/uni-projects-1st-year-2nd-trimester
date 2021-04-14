/* Да се сравнят два въведени от потребителя низа с дължина 20 символа.
 * Програма да копира по-големият от двата низа в трети низ и да го изведе на екрана.
 * В случай, че двата низа са еднакви третият низ да съдържа конкатенацията на двата низа.
 * Да се изведе съдържанието на третият низ на екрана.
 */

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[20], str2[20], str3[40];
	int result;

	cout<<"Въведи низ №1: ";	cin>>str1;
	cout<<"Въведи низ №2: ";	cin>>str2;
	result=strcmp(str1, str2);

	if(result<0)
		strcpy(str3, str1);
	else
		if(result>0)
		strcpy(str3, str2);
		else
		{
			strcpy(str3, str1);
			strcat(str3, str2);
		}
	cout<<str3;

	system("pause");
	return 0;
}



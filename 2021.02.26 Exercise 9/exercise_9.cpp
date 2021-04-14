// Да се напише програма, която въвежда знаков низ с малки букви, преобразува ги в главни букви и извежда полученият низ. Реализирайте решение чрез функция.
#include <iostream>
using namespace std;
int main()
{
	char name[80];
	int loop;

	cout<<"Enter your name in lowercase: "<<endl;
	cin.getline(name, 80);

	for(loop=0; name[loop]!=0; loop++)
		name[loop]=toupper(name[loop]);
	cout<<"The name you entered in uppercase is: "<<name<<endl;

	system("pause");
	return 0;
}

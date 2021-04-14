// От клавиатурата се въвежда цяло число. Ако то е в интервала [1,7], да се изведе с думи кой е поредният ден от седмицата, съответстващ на това число. В противен случай, да се изведе съобщението “Incorrect number!”.
#include <iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Веведете ден от седмицата като число: ";		cin>>day;

	switch(day)
	{
	case 1: cout<<"Понеделник"; break;
	case 2: cout<<"Вторник"; break;
	case 3: cout<<"Сряда"; break;
	case 4: cout<<"Четвъртък"; break;
	case 5: cout<<"Петък"; break;
	case 6: cout<<"Събота"; break;
	case 7: cout<<"Неделя"; break;
	default: cout<<"Въведохте число за ден, който не съществува!";
	}
	cout<<endl;

	return 0;
}

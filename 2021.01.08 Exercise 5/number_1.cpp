// Да се напише програма, която прочита от клавиатурата резултат от тестове (в точки) и извежда на екрана оценката по шестобалната система по предварително утвърдена конвенция.
#include <iostream>
using namespace std;
int main()
{
	int testScore;
	cout<<"Въведете резултат от тест в точки: ";	cin>>testScore;

	if(testScore>=90)
		cout<<"Оценка Отличен"<<endl;
	else
		if(testScore>=80)
			cout<<"Оценка Мн. добър"<<endl;
		else
			if(testScore>=70)
				cout<<"Оценка Добър"<<endl;
			else
				if(testScore>=50)
					cout<<"Оценка Среден"<<endl;
				else
					cout<<"Оценка Слаб"<<endl;
	return 0;
}

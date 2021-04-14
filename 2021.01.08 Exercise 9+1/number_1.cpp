// От клавиатурата се въвеждат 10 цели числа. Да се намерят минималното и максималното от тях.
#include <iostream>
using namespace std;
int main()
{
	int i, min, max, x;
	cout<<"Enter a number: ";	cin>>x; // въвеждане на 1вото число
	min=max=x; // инициализация

	for(i=1; i<=9; i++)
	{
		cout<<"Enter a number: ";	cin>>x; // въвеждане на още 9 числа

		if(x<min)
			min=x;
		if(x>max)
			max=x;
	}
	cout<<"min= "<<min<<endl;
	cout<<"max= "<<max<<endl;
	return 0;
}


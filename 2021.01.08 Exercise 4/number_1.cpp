// От клавиатурата се въвеждат теглото на човек в килограми и неговата височина в сантиметри. Програмата изчислява индекса на телесната маса (теглото в килограми се разделя на височината в метри, повдигната на квадрат) и извежда съобщение, в зависимост от получената стойност:
// • до 18.5 – поднормено тегло (Underweight);
// • от 18.5 до 25 - нормално тегло (Normal);
// • от 25 до 30 - наднормено тегло (Overweight);
// • над 30 – затлъстяване (Оbesity).
#include <iostream>
using namespace std;
int main()
{
	double weight, height, index;
	cout<<"Тест - ИТМ"<<endl;
	cout<<"Височина в метри= ";		cin>>height;
	cout<<"Тегло в килограми= ";	cin>>weight;
	index=weight/(height*height);

	if(index<=18.5)
		cout<<"Слаботелесен";
	else
		if(index<=25)
			cout<<"Нормален";
		else
			if(index<=30)
				cout<<"Наднормен";
			else
				cout<<"Затлъстяване";
	cout<<endl;
}

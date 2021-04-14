// Да се напише програма прочитаща от клавиатурата дневните приходи на един магазин за 31 дни. Да се изведе на екрана:
// а) най-ниският дневен приход и в кой ден е;
// б) сумата за на дневните приходи за 31 дни.
#include <iostream>
using namespace std;
int main()
{
	double A[31];
	double s = 0;
	int i, day_min = 0;
	for (int i=0; i<31; i++)
	{
		cout<<"Въведете дневен приход за "<<i+1<<" ден: ";	cin>>A[i];
		s=s+A[i];
	}
	double min=A[0];
	for(i=1; i<31; i++)
	{
		if(A[i]<min)
		{
			min=A[i];
			day_min=i;
		}
	}
	cout<<"Най-малък приход: "<<min<<endl;
	cout<<"За ден : "<<day_min+1<<endl;
	cout<<"Сума на приходите: "<<s<<endl;
	return 0;
}

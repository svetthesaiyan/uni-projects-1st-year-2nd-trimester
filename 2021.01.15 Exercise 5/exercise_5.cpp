// Да се състави програма на C++, която въвежда от клавиатурата брой студенти  в една група (цяло число м/у 5 и 30) и средния успех на всеки студент (масив от реални числа):
// а) намира и извежда броя на отличниците в групата;
// б) намира и извежда поредния номер на студента с най-висок успех  (ако има повече от един студент с най-висок успех, извежда всички).
#include <iostream>
using namespace std;
int main()
{
	double uspeh[30]; // 0-29
	int broi_st;
	do
	{
		cout<<"Vyvedete broq studenti (5..30): ";	cin>>broi_st;
	}
	while(broi_st<5||broi_st>30);
	// вариант с излизане, не с повтаряне
	if(broi_st<5||broi_st>30)
	{
		cout<<"Greshen broi!"<<endl;
		return 1;
	}
	for(int i=0; i<broi_st; i++)
	{
		do
		{
			cout<<"Sr. uspeh na student "<<i+1<<" e ";	cin>>uspeh[i];
		}
		while(uspeh[i]<2||uspeh[i]>6);
	}

	int otlichnici=0;
	for(int i=0; i<broi_st; i++)
		if (uspeh[i]>=5.50)
			otlichnici=otlichnici+1;
	cout<<"V grupata ima "<<otlichnici<<" otlichik(a)!"<<endl;

	double max_uspeh=uspeh[0];
	for(int i=1; i<broi_st; i++)
		if(uspeh[i]>max_uspeh)
			max_uspeh=uspeh[i];
	cout<<"Bash otlichnicite sa s nomera ";
	for(int i=0; i<broi_st; i++)
		if(uspeh[i]==max_uspeh)
			cout<<i+1<<" ";
	cout<<endl;
	return 0;
}

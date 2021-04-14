// Да се състави програма, която сортира във възходящ ред масив от максимум 50 елемента от тип символен низ с дължина 30 символа.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char people[50][30];
	char xname[30];
	int n;	// действителен брой на елементите на масива people
	int i, j;
	cout<<"Въведете броя на елементите на масива people, n <=50 : ";	cin>>n;

	for(i=0; i<n; i++)
	{
		cout<<"въведете people["<<i<<"]= ";	cin>>people[i];
	}
// сортиране на масива people
	for(i=0; i<n-1; i++)
		for(j=i; j<n; j++)
		{
			if(strcmp(people[i], people[j])>0)
			{
				strcpy(xname, people[i]);
				strcpy(people[i], people[j]);
				strcpy(people[j], xname);
			}
		}
// Извеждане на сортирания масив people
	for(i=0;i<n; i++)
		cout<<people[i]<<endl;

	system("pause")	;
	return 0;
}

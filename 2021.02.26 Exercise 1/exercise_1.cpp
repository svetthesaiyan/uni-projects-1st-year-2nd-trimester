// Да се напише програма, която да намира дължината на низа „Програмиране”.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int length=strlen("iuli seks time");	// поради някаква причина буквите на кирилица се броят за 2 символа
	cout<<"Дължината на низа е: "<<length<<endl;

	system("pause");
	return 0;
}

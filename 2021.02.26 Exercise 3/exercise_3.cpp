// Да се напише програма за въвеждане и извеждане на символни низове.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int year;
	cout<<"What year was your house built?"<<endl;
	cout<<"My house was built in the year: ";	cin>>year;

	cin.get();
	cout<<"What is your house address?"<<endl;
	cout<<"My house address is: ";
	char address[80];
	cin.getline(address, 80);

	cout<<"Year built: "<<year<<endl;
	cout<<"Address: "<<address<<endl;

	system("pause");
	return 0;
}

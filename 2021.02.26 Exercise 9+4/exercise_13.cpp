#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string Name;
	cout<<"Enter your first name: ";
	getline(cin, Name);
	cout<<"You entered "<<Name<<" as your first name"<<", which is "<<Name.length()<<" characters long."<<endl;

	Name.append(" Dobromirov");
	cout<<"Your first and middle names are: "<<Name<<" and they are "<<Name.length()<<" characters long."<<endl;

	Name.append(" Slavov");
	cout<<"Your full name is: "<<Name<<" and it is "<<Name.length()<<" characters long."<<endl;

	for(int i=0; i<Name.length(); i++)
		cout<<Name[i]<<endl;

	string s1, s2;
	s1="Svetoslav";
	s2="Slavov";
	if(s1<s2)
		cout<<s1<<" has less letters than "<<s2<<endl;
	else
		cout<<s1<<" has more letters than "<<s2<<endl;

	system("pause");
	return 0;
}

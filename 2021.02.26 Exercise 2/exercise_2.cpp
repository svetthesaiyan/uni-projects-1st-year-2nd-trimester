// Да се напише програма, която сравнява низовете „Програмиране” и „програмиране”, „Програмиране” и „ПРОГРАМИРАНЕ”, „Програмиране” и „Програмиране”.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int result=strcmp("Programirane", "programirane");
	cout<<result<<endl;

	result=strcmp("Programirane", "PROGRAMIRANE");
	cout<<result<<endl;

	result=strcmp("Programirane", "Programirane");
	cout<<result<<endl;
// резултатът е базиран според 2рата променлива спрямо 1вата
	system("pause");
	return 0;
}

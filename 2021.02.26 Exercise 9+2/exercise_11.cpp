/* Дадена е редица от n низа с дължина не по-голяма от 9.
 * Да се напише програма, която конкатенира елементите на редицата.
 */

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	char a[20][10];
	cout<<"n= ";	cin>>n;

	int i;
	for(i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]=";	cin>>a[i];
	}
	char s[200]= "";
	for(i=0; i<=n-1; i++)
		strcat(s, a[i]);
	cout<<s<<endl;

	system("pause");
	return 0;
}





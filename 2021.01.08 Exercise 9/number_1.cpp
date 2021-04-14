// Да се напише програма, която по зададено естественочисло n, намира факториела му.
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"n= ";	cin>>n;

	if(!cin)
	{
		cout<<"Error, Bad Input!"<<endl;
		return 1;
	}
	if(n<=0)
	{
		cout<<"Incorrect Input!"<<endl;
	}

	int fact=1;
	for(int i=1; i<=n;i++)
		fact=fact*i;
	cout<<n<<"!= "<<fact<<endl;
	return 0;
}

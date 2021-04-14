#include <iostream>
using namespace std;
void Rec(int x)	// резултатът се променя, като сложим '&' пред х
{
	x=x/2;
	cout<<x<<" ";
	if(x>0)
		Rec(x);
	cout<<x<<" ";
}
int main()
{
	int x;
	cout<<"x= ";	cin>>x;
	Rec(x);
	return 0;
}

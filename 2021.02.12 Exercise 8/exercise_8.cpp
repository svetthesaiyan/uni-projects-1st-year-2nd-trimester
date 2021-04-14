// Да се напише програма, която намира двоичното представяне на въведено естествено число.
#include <iostream>
using namespace std;
void bin(int n)
{
    if(n>0)
    {
        bin(n/2);
        cout<<n%2;
    }
}
int main()
{
    cout<<"a->";
    int a;    cin>>a;
    if(!cin||a<0)
    {
        cout<<"Error!"<<endl;
        return 1;
    }
    bin(a);
    cout<<endl;

    system("PAUSE");
    return 0;
}

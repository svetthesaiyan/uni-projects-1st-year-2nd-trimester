// Напишете функция, която намира сумата на две въведени от потребителя положителни цели числа.
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a;
    do
    {
        cout<<"a->"<<endl;	cin>>a;
    }
    while(a<1);

    int b;
    do
    {
        cout<<"b->"<<endl;	cin>>b;
    }
    while(b<1);
    cout<<"a+b="<<sum(a, b);

    system("pause");
    return 0;
}

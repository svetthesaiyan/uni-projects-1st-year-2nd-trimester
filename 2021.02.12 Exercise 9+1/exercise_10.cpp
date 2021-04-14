/* Да се напише програма за отпечатване на екрана на:
а) числата от 1 до N
б) числата от N до 1
в) числата от N до 1 и после обратно до N
г) буквите от Z до A и после обратно от А до Z
*/
#include <iostream>
using namespace std;
//от 1 до N
void edno_do_N(int n)
{
    if(n==0)
    	return;
    cout<<n;
    edno_do_N(n-1);
}
// от N до 1
void N_do_edno(int n)
{
    if(n==0)
    	return;
    N_do_edno(n-1);
    cout<<n;
}
// от N до 1 и после обратно до N
void N_edno_N(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }
    cout<<n;
    N_edno_N(n-1);
    cout<<n;
}
//да се напише програма за отпечатване на буквите от Z до A и после обратно от А до Z
void Z_A_Z(char z, char a)
{
    if (z==a)
    {
        cout<<a;
        return;
    }
    cout<<z;
    Z_A_Z(z-1, a);
    cout<<z;
}
int main(int argc, char** argv)
{  int n;
    cin>>n;
    edno_do_N(n);
    cout << endl;

    N_do_edno(n);
    cout << endl;

    N_edno_N(n);
    cout << endl;

    Z_A_Z('z', 'a');

    return 0;
}






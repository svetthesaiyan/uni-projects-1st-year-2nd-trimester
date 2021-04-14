// Напишете функция, която намира по-голямата стойност между две цели числа.
#include <iostream>
using namespace std;
int max(int num1, int num2);	// function declaration
int main()
{
    int a, b, ret;	// local variable declaration
    cout<<"Input an integer number="<<endl;    cin>>a;
    cout<<"Input an integer number="<<endl;    cin>>b;
    ret=max(a, b);	// calling a function to get max value
    cout<<"Max value is : "<<ret<<endl;
    return 0;
}
int max(int num1, int num2)
{
	// function returning the max between two numbers
    int result;		// local variable declaration
    if (num1>num2)
        result=num1;
    if(num1==num2)
    {
    	cout<<"You entered 2 identical numbers!"<<endl;
    	result=num1=num2;
    }
    else
        result=num2;
    return result;
}

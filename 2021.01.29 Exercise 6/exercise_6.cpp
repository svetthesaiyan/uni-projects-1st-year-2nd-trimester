/* Да се напише програма, в която са дефинирани следните функции за работа с едномерен масив от числа:
*— за въвеждане;
*— за извеждане;
*— за намиране на максимум;
*— за намиране на броя на отрицателните елементи.
*Чрез тези функции програмата трябва да въведе и изведе масив от 8 числа и да съобщи максимумът му и колко са отрицателните му елементи.
*/

#include <iostream>
using namespace std;
void ReadArray(double arr[], int n) {
        cout<<"Въведете "<<n<<" числа:"<<endl;
    for(int i=0; i<n; ++i)
    {
        cout<<"  "<<i+1<<"-о число: ";
        cin>>arr[i];
    }
}

void WriteArray(double* arr, int n)
{
    cout<<"Масив: ";
    for(int i=0; i<n; ++i)
    	cout<<' '<<arr[i];
    cout << endl;
}

double Max(double arr[], int n)
{
    double max=arr[0];
    for(int i=1; i<n; ++i)
    	if(arr[i]>max)
    		max=arr[i];
    return max;
}

int NegCount(double* arr, int n)
{
    int cnt=0;
    for(int i=0; i<n; ++i)
if (arr[i]<0.0)
        ++cnt;
    return cnt;
}

int const Len = 8;
int main()
{
    double num[Len];
    //cout << "sizeof(num) = " << sizeof(num) << endl; //тест
    ReadArray(num, Len);
    WriteArray(num, Len);
    cout<<"Максимална стойност на елемент: "<<Max(num, Len)
        <<"\nБрой на отрицателните елементи: "<<NegCount(num, Len)
        <<"\n\n";

    system("pause");
}

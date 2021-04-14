// Да се сортира едномерен масив от цели числа във възходящ ред като се използва методът на мехурчето. За въвеждане и отпечатване на елементите на масива и за сортирането да се използват функции.
#include <iostream>
using namespace std;
void bubbleSort(int numbers[], int array_size)
{
    int temp;
    for(int i=1; i<array_size; i++)
    {
        for(int j=1; j<array_size; j++)
        {
            if(numbers[j - 1]>numbers[j])
            {
                temp=numbers[j-1];
                numbers[j-1]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
}
void read(int numbers[], int array_size)
{
    for(int i=0; i<array_size; i++)
    {
        cout<<"Въведете елемент "<<i<< ":";		cin>>numbers[i];
    }
}
void write(int numbers[], int array_size)
{
    for(int i=0; i<array_size; i++)
    {
        cout<<numbers[i]<<" ";
    }
}
int main()
{
    int n;
    do
    {
        cout<<"Въведете брой на елементите на масива: ";	cin>>n;
    }
    while(n<1);
    int a[20];
    read(a, n);
    bubbleSort(a, n);
    write(a, n);

    system("pause");
    return 0;
}

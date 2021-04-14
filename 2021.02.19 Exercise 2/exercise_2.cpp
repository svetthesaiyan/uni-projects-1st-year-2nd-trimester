// Да се сортира масив от 10 случайно генерирани цели числа в интервала от 0 до 100 в низходящ ред като се използва пряка селекция. Да се напишат функции за генериране на числата, извеждане на елементите на масива и за сортиране.
#include <iostream>
#include <ctime>
using namespace std;
void SelectSort(int A[], int n)
{
    int max;	int b;
    for(int a=0; a<n-1; a++)
    {
        b=a;
        max=A[b];
        for(int j=a+1; j<n; j++)
        {
            if(A[j]>max)
            {
                b=j;
                max=A[b];
            }
        }
        A[b]=A[a];
        A[a]=max;
    }
}
void read(int numbers[], int array_size)
{
    srand(static_cast<unsigned>(time(NULL)));
    for(int i=0; i<array_size; i++)
    {
        numbers[i]=rand()%(100);
    }
}
void print(int numbers[], int array_size)
{
    for(int i=0; i<array_size; i++)
    {
        cout<<numbers[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int a[10];
    read(a, 10);
    cout<<"Изход преди сортиране: "<<endl;
    print(a, 10);
    SelectSort(a, 10);
    cout<<"Изход след сортиране: "<<endl;
    print(a, 10);

    system("pause");
    return 0;
}

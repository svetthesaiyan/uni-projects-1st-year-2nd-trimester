// Да се напише функция, която получава параметър масив от цели числа и записва във всички елементи на четна позиция на масива стойността на минималния елемент.
#include <iostream>
#include <ctime>
using namespace std;
void MinimumAtEvenPos(int arr[], const int size)
{
    int min=arr[0];
    for (int i=1; i<size; ++i)
        if(arr[i]<min)
            min=arr[i];
    // в min е най-малкия елемент
    // сменяме елементите на четна позиция с мин.
    for (int i=0; i<size; i=i+2)
        arr[i]=min;
    /* втори подход за четна позиция
    for (int i = 0; i < size; i++)
        if (i % 2 == 0)
            arr[i] = min; */
    return;
}

void PrintArray(int arr[], const int size, const char* S)
{
    cout<<S;
    for(int i=0; i<size; ++i)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n=20;
    int A[n];
    // генерираме n числа 0..99
    for(int i=0; i<n; ++i)
        A[i]=rand()%100;
    PrintArray(A, n, "Array A now: ");
    MinimumAtEvenPos(A, n);
    PrintArray(A, n, "Array A after MinimumAtEvenPos: ");
    return 0;
}

// Да се напише функция, която получава параметър масив от цели числа. Отпечатва елементите на масива, намира средноаритметичната стойност на елементите. Отпечатва нов масив с елементите от първия, увеличени с единица, намира средноаритметичната стойност и на елементите от втория масив. Прилагаме същите действия с диманичен масив със случайни числа.
#include <iostream>
#include <ctime>
using namespace std;
double average(int arr[], const int size)
{
    double sum=0.0;
    for(int i=0; i<size; ++i)
        sum+=arr[i];
    return sum/size;
}
void Plus1(int arr[], const int size)
{
    for(int i=0; i<size; ++i)
        arr[i]++;
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
    const int n=10;
    // Пример със статичен масив
    int A[n]={ 4,6,78,3,1,3,5,7,4,2 };
    cout<<"Average of A = "<<average(A, n)<<endl;
    PrintArray(A, n, "Array A now: ");
    Plus1(A, n);
    PrintArray(A, n, "Array A after Plus1: ");
    cout<<"Average of A +1 = "<<average(A, n)<< endl;
    // Пример с динамичен масив със случайни числа
    int* p=new int[n];
    for(int i=0; i<n; ++i)
        p[i]=rand()%100;
    PrintArray(p, n, "Array p now: ");
    cout<<"Average of p = "<<average(p, n)<<endl;
    delete[] p;
    return 0;
}

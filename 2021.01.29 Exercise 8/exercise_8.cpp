// Съставете програма за въвеждане на елементите на двумерен масив, която използва четири функции – за въвеждане на брой редове и колони, за въвеждане и извеждане на елементите на масива. Броят на редовете на масива трябва да бъде защитен в границите между 4 и 10, броят на колоните – между 3 и 8 и стойностите на елементите – между 3 и 9.
#include <iostream>
#include <iomanip>
using namespace std;
int row()
{
    int a;
    do
    {
        cout<<"въведи брой редове ";	cin>>a;
    }
    while(a<4||a>10);
    return a;
}
int column()
{
    int b;
    do
    {
        cout<<"Въведи брой колони ";	cin>>b;
    }
    while(b<3||b>8);
    return b;
}
void readarr(int r, int c, int arr[][9])
{
    for(int i=0; i<r; i++)
    {
        cout<<"Ред"<<i+1;
        for(int j=0; j<c; j++)
            do
            {
                cout<<endl<<"Въведи "<<j+1<<" елемент->";
                cin >> arr[i][j];
            }
            while(arr[i][j]<3||arr[i][j]>9);
    }
}
void writearr(int r, int c, int arr[][9])
{
    for(int i=0; i<r; i++)
    {
        cout<<endl;
        for(int j=0; j<c; j++)
            cout<<setw(5)<<arr[i][j];
    }
}
int main(int argc, char* argv[])
{
    int r=row();
    int c=column();
    int a[10][9];
    readarr(r, c, a);
    writearr(r, c, a);

    system("PAUSE");
    return 0;
}

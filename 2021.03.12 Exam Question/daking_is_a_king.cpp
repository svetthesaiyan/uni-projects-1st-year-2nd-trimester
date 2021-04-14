#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
// начало на изграждането на структура
struct avtosalon
{
	string marka;
	int godina_na_proizvodstvo;
	string cvqt;
	double edini4na_cena;
};
// край на изграждането на структура
// начало на а) подточка
void input_data(avtosalon cars[], int n1)
{
	for(int i=0; i<n1; i++)
	{
		cout<<"Въведи марка на автомобил: ";
		cin.get();	getline(cin, cars[i].marka);
		cout<<"Въведи година на производство на автомобил: ";	cin>>cars[i].godina_na_proizvodstvo;
		cout<<"Въведи цвят на автомобила: ";
		cin.get();	getline(cin, cars[i].cvqt);
		cout<<"Въведи единична цена на автомобила: ";	cin>>cars[i].edini4na_cena;
		cout<<endl;
	}
}
// край на а) подточка
// начало на б) подточка
void output_data(avtosalon cars[], int n1)
{
	for(int i=0; i<n1; i++)
	{
		cout<<left<<setw(15) <<cars[i].marka<<" ";
		cout<<left<<setw(15)<<cars[i].godina_na_proizvodstvo<<" ";
		cout<<left<<setw(15)<<cars[i].cvqt<<" ";
		cout<<left<<setw(15)<<cars[i].edini4na_cena<<" ";
		cout<<endl;
	}
}
// край на б) подточка
// начало на в) подточка
void average_data(avtosalon cars[], int n1)
{
    double avg= 0.0;
    double sum = 0.0;
    for(int i=0; i < n1; i++)
    {
        sum += cars[i].edini4na_cena;
    }
    avg = sum / n1;
    cout<<"Средната единична цена на автомобилите е: "<<avg;
    cout<<endl;
}
// край на в) подточка
// начало на г) подточка
void max_data(avtosalon cars[], int n1)
{
	double max=0;
	for(int i=1; i<n1; i++)
	{
		if(cars[i].edini4na_cena>5000)
		{
			max=+1;
		}
	}
	cout<<"Броят автомобили с цена над 5000 лв. е: "<<left<<setprecision(5)<<max<<endl;
}
// край на г) подточка
// начало на д) подточка
//с BubbleSort не сме особено добри приятели за съжаление... ;(
// край на д) подточка
// начало на извеждане на всички функции
int main() {
	avtosalon cars[50];
	int n;
	cout<<"Въведете брой записи: ";	cin>>n;
	input_data(cars, n);
	output_data(cars, n);
	average_data(cars, n);
	max_data(cars, n);
// край на извеждане на всички функции
	system("pause");
	return 0;
}

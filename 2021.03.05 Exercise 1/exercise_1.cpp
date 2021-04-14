#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct book
{
	int shifar;
	char zaglavie[100];
	double ed_cena;
	int br_ekz;
	double stoinost;
};

void input_data(book books[], int n1)
{
	for (int i = 0; i < n1; i++)
	{
		cout << "Vavedi shifar: ";
		cin >> books[i].shifar;
		cout << "Vavedi zaglavie: ";
		cin >> books[i].zaglavie;
		cout << "Vavedi ed.cena: ";
		cin >> books[i].ed_cena;
		cout << "Vavedi broi_ekzemplqri: ";
		cin >> books[i].br_ekz;
		books[i].stoinost = books[i].ed_cena * books[i].br_ekz;
	}
}
void output_data(book books[], int n1)
{
	for (int i = 0; i < n1; i++)
	{
		cout << left << setw(5) << books[i].shifar << " ";
		cout << left << setw(20) << books[i].zaglavie << " ";
		cout << left << setw(5) << books[i].ed_cena << " ";
		cout << left << setw(5) << books[i].br_ekz << " ";
		cout << left << setprecision(5) << books[i].stoinost << endl;
	}
}

void obsta_suma(book books[], int n1)
{
	double sum = 0;
	for (int i = 0; i < n1; i++)
	{
		sum = sum + books[i].stoinost;
	}
	cout << "Obstata suma za vsichki knigi e: " << sum;
}

void max_data(book books[], int n1)
{
	double max = books[0].stoinost;
	for (int i = 1; i < n1; i++)
	{
		if (books[i].stoinost > max)
			max = books[i].stoinost;
	}
	cout << "max platena suma e: " << left << setprecision(5) << max << endl;
}

int main() {
	book books[30];
	int n;
	cout << "input broi zapisi: ";
	cin >> n;
	input_data(books, n);
	output_data(books, n);
	max_data(books, n);
	obsta_suma(books, n);
	return 0;
}

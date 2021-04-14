/* Да се напише програма на С++, обработваща статистика на броя на харесванията на една Фейсбук страница за 7 до 77 дни. За всеки от тези дни се пази броят харесвания за този ден. Да се въведе броят дни.
 * а) да се дефинира подходящ масив и да се реализира въвеждане от клавиатурата на данните в него;
 * б) да се изведе номерът на деня с най - голям брой харесвания и този брой
 * в) да се изведат дните, в които броят харесвания е над 30.
 */

#include <iostream>
using namespace std;
void InputLikesArray(int arr[], const int size)
{
	cout<<"Вие избрахте да проверите колко харесвания сте имали за "<<size<<" дни"<<endl; // въвеждане на големината на масива
	for(int i=1; i<=size; i++)
	{
		cout<<"За ден №"<<i<<" сте имали толкова харесвания: ";	cin>>arr[i]; // въвеждане на елементите от масива
	}
}
void PrintArray(int arr[], const int size)
{
	for(int i=1; i<=size; i++)
	{
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
int MaxOfArray(int arr[], const int size)
{
	int max=arr[1];
	for(int i=2; i<=size; i++)
		if(arr[i]>max)
			max=arr[i];
	return max;
}
void PrintIndexesEqualTo(int arr[], const int size, int value)
{
	cout<<"Тези "<<value<<" харесвания сте ги получили през ден №";
	for(int i=1; i<=size; i++)
		if(arr[i]==value)
			cout<<i<<" ";
	cout<<endl;
}
void PrintIndexesGreaterTo(int arr[], const int size, int value)
{
	cout<<"Над "<<value<<" харесвания има в следните дни: ";
	for(int i=1; i<=size; i++)
		if(arr[i]>size)
			cout<<i<<" ";
	cout<<endl;
}

int main()
{
	const int maxn=77;	int likes[maxn+1];	int n;
	cout<<"Въведете броя дни (от 7 до 77): ";
	do
		cin>>n;
	while(n<7||n>77);

	InputLikesArray(likes, n);
	PrintArray(likes, n);
	int MaxLikes=MaxOfArray(likes, n);
	cout<<"Най-големият брой харесвания за дадения период е: "<<MaxLikes<<endl;

	PrintIndexesEqualTo(likes, n, MaxLikes);

	PrintIndexesGreaterTo(likes, n, 30);
	cout<<"Край на програмата."<<endl;

	system("pause");
	return 0;
}

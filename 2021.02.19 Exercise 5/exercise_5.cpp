// Да се напише рекурсивна функция, която търси въведена стойност в масив от цели числа като се използва алгоритъмът за двоично търсене. (рекурсивен вариант)
#include <iostream>
using namespace std;
int bsearch(int a[], int from, int to, int n)
{
	if(from>to)
		return -1;
	else
	{
		int mid=(from+to)/2;
		if(a[mid]==n)
			return mid;
		else if(a[mid]<n)
			return bsearch(a, mid+1, to, n);
		else
			return bsearch(a, from, mid-1, n);
	}
}
int main()
{
	int numbers[5]={2,3,5,8,9};	int search_value;
	cout<<"Enter search value: ";	cin>>search_value;
	int index=bsearch(numbers, 0, 4, search_value);
	if(index>=0)
		cout<<"Search value found at index: "<<index<<endl;
	else
		cout<<"Search value not found, index returned: "<<index<<endl;

	system("pause");
	return 0;
}

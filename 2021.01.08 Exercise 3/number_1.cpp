// Да се напише програма, която намира обема на куб със страна А, дължината на която се въвежда от клавиатурата.
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
 {

	double a;
	cout << "Въведете дължина на страна a= ";
	cin >> a;
	double v = a * a * a;
	cout << "Обема на куба e V= " << v << endl;

	system("pause > 0 ");
	return 0;
}

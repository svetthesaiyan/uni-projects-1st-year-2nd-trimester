// Да се напише програма на С++, реализираща въвеждане от клавиатурата на месечните разходи на едно домакинство за 12 месеца.
// а) да се изведе с цифри месецът с най-малък разход и стойността му;
// б) да се пресметне общият годишен разход на домакинството;
// в) да се изведат месеците, в които разходите са над 800 лв за съответния месец.
#include <iostream>
using namespace std;
int main()
{
	// масив от n елемента, ако работим с 1..n - декларираме n+1 елемента
    const int n=12;
    float masiv[n+1];
    //вход на масива (въвеждане)
    for(int i=1; i<=n; i++)
    {
        cout<<"Razhod za mesec "<<i<<" = ";
        cin>>masiv[i];
    }
    // а)
    // Намиране на min/max/средна стойност/сума на елементите
    // ако масива е от float/double - трябва и min, max, suma да са от същия тип
    float min=masiv[1];
    for(int i=2; i<=n; i++)
        if(masiv[i]<min)
            min=masiv[i];
    //Извеждане на индексите на елементи, изпълняващи просто условие (неравенство)
    cout<<"Mesecite s min razhod "<<min<<" sa: ";
    for(int i=1; i<=n; i++)
        if(masiv[i]==min)
            cout<<i<<" ";
    cout<<endl; // това завършва реда с изброяване на индексите

    // б)
    //Намиране на min/max/средна стойност/сума на елементите
    // ако масива е от float/double - трябва и min, max, suma да са от същия тип
    float suma=masiv[1];
    for(int i=2; i<=n; i++)
        suma=suma+masiv[i];
    cout<<"Obshtiqt godishen razhod e "<<suma<<endl;

    // в)
    // Извеждане на индексите на елементи, изпълняващи просто условие(неравенство)
    cout<<"Mesecite s razhod nad 800 lv sa: ";
    for(int i=1; i<=n; i++)
        if(masiv[i]>800)
            cout<<i<<" ";
    cout<<endl;
    return 0;
}

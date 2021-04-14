#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
struct Student
{
    int number;
    char name[20];
    char lastname[20];
};
void addStudent(Student& st)
{
    cout<<"Факултетен номер: ";    cin>>st.number;
    cout<<"Име: ";    cin>>st.name;
    cout<<"Фамилия:";    cin>>st.lastname;
}
void displayStudents(Student st[], int n)
{
    cout<<"Фак.номер"<<setw(10)<<"Име"<<setw(10)<<"    Фамилия" <<endl;
    for (int i=0; i<n; i++)
    {
    cout<<st[i].number<<setw(15)<<st[i].name<<setw(15)<<st[i].lastname<<endl;
    }
}
void bubbleSort(Student st[], int n)
{
    Student temp;
    for (int i=1; i<=n ; i++)
    {
        for (int j=1; j<=i; j++)
        {
            if (strcmp, (st[j-1].name, st[j].name)>0)
            {
                temp=st[j-1];
                st[j-1]=st[j];
                st[j]=temp;
            }
        }
    }
}

int main()
{
    Student students[40];
    int n;
    cout<<"Въведете брой студенти: ";    cin>>n;
    for (int i=0; i<n; i++)
        addStudent(students[i]);
    cout<<endl<<"Изход преди сортиране: "<<endl;
    displayStudents(students, n);
    cout<<endl;

    bubbleSort(students, n);
    cout<<endl<<"Изход след сортиране: "<<endl;
    displayStudents(students, n);

    system("pause");
    return 0;
}

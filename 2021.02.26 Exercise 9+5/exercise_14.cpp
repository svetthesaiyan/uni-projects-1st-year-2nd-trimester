#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Your first name is " << first_name <<endl;
    cout << "This name is " << first_name.length() <<" characters long."<<endl;

    string middle_name;
    cout << "Enter your middle name: ";
    getline(cin, middle_name);
    cout << "This name is " << middle_name.length() << " characters long."<<endl;
    cout << "Your first and middle names are: " << first_name+" "+middle_name<<endl;


    string family_name;
    cout << "Enter your family name: ";
    getline(cin, family_name);
    cout << "This name is " << family_name.length() << " characters long." << endl;
    cout << "Your full name is: " << first_name + " " + middle_name + " " + family_name << endl;

    string full_name=first_name + " " + middle_name + " " + family_name;
    cout << "Your full name is " << full_name.length() << " characters long." << endl;


}

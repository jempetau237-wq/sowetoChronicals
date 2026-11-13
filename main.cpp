#include <iostream>

using namespace std;

int lives = 10;
string name;
void menu()
{
    cout << "------------------------------------------" << endl;
    cout << "The Chronicles of Soweto" << endl;

    cout << "Please provide your full name :" << endl;
    getline(cin,name);

    cout << "------------------------------------------" << endl;
    cout << "You are in Soweto with just an Okapi" << endl;
    cout << "Your job is to survive" << endl;

    cout << "------------------------------------------" << endl;
    cout << "YOUR DATA !!" << endl;
    cout << "" << endl;
    cout << "NAME :" <<name<< endl;
    cout << "LIVES :" <<lives<< endl;
    cout << "LOCATION :LAKEWOOD "<< endl;


}

int main()
{
     menu();
    return 0;
}

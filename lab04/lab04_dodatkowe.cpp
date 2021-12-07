#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout <<"Zadanie 1" << endl;
    cout << endl;
    do{
    cout << "Podaj liczbe > 0" << endl;
    cin >> liczba;
    }
    while (liczba < 0);
        cout << "OK" << endl;

    int liczba2;
    cout << endl;
    cout << "Zadanie 2"<< endl;
    cout << endl;
    do{
        cout << "Podaj liczbe z przedzialu <10,20>" << endl;
        cin >> liczba2;
    }
    while (liczba2 < 10 || liczba2 > 20);
        cout << "OK"<< endl;

    int liczba3;
    int suma3 = 0;
    cout << "Zadanie 3" <<endl;
    cout <<endl;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba3;
    while (liczba3 != 0)
    {
        liczba3 /= 10;
        ++suma3;
    }
    cout << suma3;
    return 0;

}

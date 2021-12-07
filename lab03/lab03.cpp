#include <iostream>

using namespace std;

int main()
{
    int liczba;
    int podana;
    cout << "Zadanie 1: " <<endl;
    cout << endl;
    cout << "Podaj liczbe calkowita z przedzialu <0,10> " << endl;
    cin >> liczba;
    if (liczba >= 0 && liczba <= 10)
        cout << "OK" <<endl;
    else
        cout << "zla liczba" <<endl;


    cout << endl;
    char znak;
    int senior_javy;
    int n;
    cout << "Zadanie 2: " <<endl;
    cout << endl;
    cout << "Ile znakow chcesz sprawdzic? " <<endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Podaj znak: ";
        cin >> znak;
        senior_javy = znak;
        cout <<endl;
        cout <<endl;
        cout << "Podales znak " << znak << " ktorego kod to " << int(znak);
        cout <<endl;
    }


    cout << endl;
    char znak2;
    cout << "Zadanie 3: " <<endl;
    cout << endl;
    cout << "Podaj wielka litere: " <<endl;
    cin >> znak2;
    if (znak2 >= 'A' && znak2 <= 'Z')
        cout << "OK";
    else
        cout << "To nie jest wielka litera";
    return 0;
}

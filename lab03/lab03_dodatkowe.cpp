#include <iostream>

using namespace std;

int main()
{
    int liczba1;
    int liczba2;
    int wynik;
    int test;
    cout << "Zadanie 1" <<endl;
    cout <<endl;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba1;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba2;
    cout << "Ile wynosi suma liczb " << liczba1 << " i " << liczba2 << "?" <<endl;
    cin >> wynik;
    test = liczba1 + liczba2;
    if (wynik == test)
        cout << "OK";
    else
        cout << "Zla suma";


    int liczba3;
    int liczba4;
    int wybor;
    cout <<endl;
    cout <<endl;
    cout << "Zadanie 2" <<endl;
    cout <<endl;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba3;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba4;
    cout << "Mamy dana liczbe: " << liczba3 << " i " << liczba4 <<endl;
    cout << "Jaka operacje chcesz na nich wykonac?" << endl << "1. + " << endl << "2. - " << endl << "3. * " << endl << "4. / " <<endl;
    cin >> wybor;
    switch (wybor)
    {
    case 1:
        cout << liczba3 + liczba4 <<endl;
        break;
    case 2:
        cout << liczba3 - liczba4 <<endl;
        break;
    case 3:
        cout << liczba3 * liczba4 <<endl;
        break;
    case 4:
        cout << liczba3 / liczba4 <<endl;
        break;
    default: cout << "Nieprawid³owy operator" <<endl;
    }

    return 0;
}

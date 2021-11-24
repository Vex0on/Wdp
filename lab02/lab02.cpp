#include <iostream>

using namespace std;

int main()
{
    cout << "ZADANIE 1" << endl;
    cout <<endl;
    int liczba;
    cout << "Podaj liczbe calkowita > 0: ";
    cin >> liczba;

    if (liczba>0)
        cout << "Liczba " << liczba << " jest wieksza od 0"<<endl;
    else
        cout << "Liczba " << liczba << " jest mniejsza od 0"<<endl;
    cout<<endl;
    cout<<endl;


    cout << "ZADANIE 2"<<endl;
    int liczba2, liczba3;
    cout<<"Podaj pierwsza liczbe: ";
    cin >> liczba2;
    cout<<"Podaj druga liczbe: ";
    cin >> liczba3;

    if (liczba2>liczba3)
        cout<< "Liczba " << liczba2 << " jest wieksza od liczby " << liczba3;

    if (liczba3>liczba2)
        cout<< "Liczba " << liczba3 << " jest wieksza od liczby " << liczba2;
    cout<<endl;
    cout<<endl;


    cout << "ZADANIE 3"<<endl;
    int liczba4, liczba5, liczba6;
    cout << "Podaj 3 liczby calkowite: ";
    cin >> liczba4 >> liczba5 >> liczba6;
    cout<<endl;

    if (liczba4>liczba5 && liczba4>liczba6)
        cout << "Najwieksza liczba z podanych jest: " << liczba4;

    if (liczba5 > liczba4 && liczba5 > liczba6)
        cout << "Najwieksza liczba z podanych jest: " << liczba5;

    if (liczba6 > liczba4 && liczba5 < liczba6)
        cout << "Najwieksza liczba z podanych jest: " << liczba6;
    cout<<endl;


    cout << "ZADANIE 4"<<endl;
    int number, number2, suma = 0, podana;
    cout<<"Podaj pierwsza liczbe: ";
    cin >> number;
    cout<<"Podaj druga liczbe: ";
    cin >> number2;
    suma = number + number2;
    cout<<endl;
    cout << "Podaj sume tych liczb" << endl;
    cout << "-> ";
    cin >> podana;
    if (podana == suma)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "Podales zla liczbe" << endl;
    }
    cout<<endl;

    cout << "ZADANIE 5"<<endl;
    int number5;
    cout << "Podaj liczbe calkowita z przedzialu <0,10>: " << endl;
    cout << "-> ";
    cin >> number5;

    if (number5 >= 0 && number5 <= 10)
    {
        cout << "OK" <<endl;
    }

    else
    {
        cout << "Ta liczba nie nalezy do przedzialu <0, 10>" <<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Zadanie1" <<endl;
    cout <<endl;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    if (liczba % 2 == 0)
        cout << "Podana liczba jest parzysta"<<endl;
    else
        cout << "Podana liczba jest nieparzysta"<<endl;

    int kwota;
    cout <<endl;
    cout << "Zadanie 2" <<endl;
    cout <<endl;
    cout << "Wprowadz kwote zarobionych pieniedzy: ";
    cin >> kwota;
    if (kwota <= 6000)
        cout << "Podatek do zaplacenia = " << kwota * 17/100 <<endl;
    else
        cout << "Podatek do zaplacenia = " << kwota * 30/100 <<endl;

    int liczba1 = 6;
    int liczba2 = 3;
    int wybor;
    cout << "Zadanie 3" <<endl;
    cout <<endl;
    cout << "Mamy 2 liczby" <<endl;
    cout << "Liczba 1 = " << liczba1 << " i liczba 2 = " << liczba2 <<endl;
    cout << "Jaka operacje chcesz na nich wykonac?" << endl << "1. + " << endl << "2. - " << endl << "3. * " << endl << "4. / " <<endl;
    cin >> wybor;
    switch (wybor)
    {
    case 1:
        cout << liczba1 + liczba2 <<endl;
        break;
    case 2:
        cout << liczba1 - liczba2 <<endl;
        break;
    case 3:
        cout << liczba1 * liczba2 <<endl;
        break;
    case 4:
        cout << liczba1 / liczba2 <<endl;
        break;
    }

    return 0;
}



/*Zadanie 1
Program prosi o podanie liczby ca�kowitej.
Sprawdza, czy podana liczba jest liczb� parzyst�.
Wypisuje odpowiedni komunikat.
Uwaga! u�yj operatora  % modulo (reszta z dzielenia)
33%2    reszta 1
12%2	   reszta 0

Zadanie 2
Wprowad� kwot� zarobionych pieni�dzy i policz jaki podatek nale�y zap�aci� od tej kwoty.
Za�o�enie:
Do kwoty 60000.00 z�. p�acimy podatek 17%
Powy�ej kwoty 60000 podatek wynosi 30%

Zadanie 3
Deklarujemy dwie zmienne typu int i przypisujemy im warto�ci.
Program pyta jak� operacj� chcemy wykona� na tych liczbach.
Do wyboru mamy: + - * /
Wczytujemy operator.
Program sprawdza jaki operator zosta� podany i wypisuje wynik operacji.
W przypadku podania znaku innego ni� prawid�owy operator wy�wietlany jest komunikat �Nieprawid�owy operator�

*/

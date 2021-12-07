#include <iostream>

using namespace std;

int main()
{
    cout << "Zadanie 1" <<endl;
    cout << endl;
    cout << "Liczby od 1 do 20: " << endl;
    for (int i=1; i <= 20;i++)
    {
        cout << "--> " << i <<endl;
    }


    cout << "Zadanie 2" <<endl;
    cout <<endl;
    int suma = 0;
    for (int i =5;i<=15;i++)
        suma += i;
    cout << "Suma liczb z tego przedzialu wynosi: " << suma <<endl;


    cout << "Zadanie 3" <<endl;
    cout << endl;
    cout << "Litery od A do Z: " << endl;
    for (char i='a'; i <= 'z';i++)
    {
        cout << "--> " << i <<'\t' <<int(i) <<endl;
    }


    cout << "Zadanie 4" <<endl;
    cout << endl;
    char znak;
    do
    {
        cout<<"Podaj litere a: " <<endl;
        cin >> znak;
    }
    while(znak!='a');
        cout << "Podales prawidlowa litere" <<endl;


    cout << "Zadanie 5" <<endl;
    cout << endl;
    char znak2;
    do
    {
        cout<<"Podaj litere a lub A: " <<endl;
        cin >> znak2;
    }
    while(znak2!='a' && znak2!='A');
        cout << "Podales jedna z prawidlowych liter"<<endl;


    cout << "Zadanie 6" << endl;
    cout << endl;
    int liczba4 = 0;
    int suma4 = 0;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba4;
    while (liczba4 > 0)
    {
        suma4 += liczba4 % 10;
        liczba4 /= 10;
    }
    cout <<"--> " << suma4;
    cout << endl;


    int suma2 = 0;
    int liczba;
    cout << "Zadanie 7" <<endl;
    cout <<endl;
    while(suma2 < 100)
    {
        cin >> liczba;
        suma2 += liczba;
    }
    return 0;
}

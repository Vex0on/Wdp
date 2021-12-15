#include <iostream>
#include <time.h>

using namespace std;
int maks(int, int);
int pole(int, int);
void szlaczek(int, char);
void losuj(int [], int, int);
void wypisz(int [], int);
int suma(int [],int);
int czyRosnacy(int [],int);
int main()
{
    cout << "Zadanie 1" << endl;
    cout <<endl;
    int wymiar1,wymiar2;
    cout << "Podaj boki prostokata: " <<endl;
    cout << "Bok a: ";
    cin >> wymiar1;
    cout << "Bok b: ";
    cin >> wymiar2;
    cout <<endl;
    cout << "Pole prostokata o wymiarach: " << " a: " << wymiar1 << ", b: " << wymiar2 << " wynosi = " << pole(wymiar1,wymiar2) << endl;


    int liczba1, liczba2;
    cout <<endl;
    cout << "Zadanie 2" << endl;
    cout <<endl;
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout <<endl;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    cout <<endl;
    cout << "Wieksza z liczb: " << "x = " << liczba1 << " y = " << liczba2 << " jest liczba " << maks(liczba1, liczba2) << endl;


    char znak;
    int ilosc;
    cout <<endl;
    cout << "Zadanie 3" << endl;
    cout <<endl;
    cout << "Podaj znak: ";
    cin >> znak;
    cout <<endl;
    cout << "Podaj ilosc powtorzen: ";
    cin >> ilosc;
    szlaczek(ilosc, znak);


    int rozmiar=6;
    int tablica[rozmiar];
    cout <<endl;
    cout << "Zadanie 5" << endl;
    cout <<endl;
    cout <<endl;
    losuj(tablica, rozmiar, 10);
    cout <<endl;
    cout << "Wypisane: ";
    wypisz(tablica, rozmiar);
    cout <<endl;
    cout << czyRosnacy(tablica, rozmiar);
    cout <<endl;
    cout << "suma: " << suma(tablica, rozmiar) <<endl;
    return 0;
}
int pole(int wymiar1,int wymiar2)
{
    return wymiar1 * wymiar2;
}

int maks(int liczba1, int liczba2)
{
    if (liczba1 > liczba2)
    {
        return liczba1;
    }
    else
    {
        return liczba2;
    }
}

void szlaczek(int ile, char znak)
{
    int szlak;
    for (int i = 0; i < ile; i++)
    {
      cout << znak;
    }
    cout << endl;
}

void losuj(int tab[],int rozmiar,int koniec)
{
    srand(time(NULL));
    for (int i = 0; i < rozmiar; i++)
    {
        tab[i] = rand()%(koniec+1);
    }
}

void wypisz(int tab[],int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
}

int suma(int tab[],int rozmiar)
{
    int wynik = 0;
    for (int i = 0; i < rozmiar; i++)
    {
        wynik += tab[i];
    }
    return wynik;
}

int czyRosnacy(int tab[], int rozmiar)
{
    int wynik = 0;
    for(int i = 0; i < rozmiar - 1; i++)
    {
        if(tab[i] < tab[i+1])
            wynik = 1;
        else
        {
            wynik = 0;
            break;
        }
    }
    return wynik;
}

/*
    char napis[20], znak = '\0';
    int i;
    cout << "A napisz cos: " <<endl;
    cin.getline(napis, 20);
    i = 0;
    while(napis[i]!='\0')i++;
    for (i = 0; i<20; i++)
    {
        if (napis[i]>= '0' && napis[i]<= '9')
        {
            i++;
            napis[i] = znak;
        }
    }
    */

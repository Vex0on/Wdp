#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    cout << "\nZad_8" << endl;

    cout << "n^2-1<100" <<endl;

    int n = 100;
    while(true)
    {
        if((n * n - 1) < 100)
            break;
        n--;
    }
    cout << "answer = " << n << endl;



    
    

    int liczba;
    cout << "Zadanie 1" << endl;
    do
    {
        cout << "Podaj liczbe z zakresu <-20, 20>: " <<endl;
        cout << "-> ";
        cin >> liczba;
        cout << endl;
    }
    while (liczba < -20 || liczba > 20);
    cout << "OK" << endl;

    int liczba2, lb2, roznica = 0;
    cout << endl;
    cout << "Zadanie 2" << endl;
    do
    {
        cout << "Podaj 2 liczby calkowite, ktorych roznica jest rowna 100: " << endl;
        cout << "-> ";
        cin >> liczba2;
        cout << endl;
        cout << "-> ";
        cin >> lb2;
        cout << endl;
        roznica = liczba2 - lb2;
    }
    while (roznica != 100);
    cout << "OK" << endl;

    int liczba3;
    cout << endl;
    cout << "Zadanie 3" << endl;
    cout << "Podaj liczbe calkowita dodatnia: " << endl;
    cout << "-> ";
    cin >> liczba3;
    cout << endl;
    for (int i = 1; i <= liczba3; i++)
    {
        if (liczba3 % i == 0)
        {
            cout << i << ", ";
        }
    }

    cout << endl;
    cout << "Zad_4" << endl;

    int tab[15];
    int parz;
    cout << "Zadanie 4" << endl;
    cout << "Losowanie liczb: " <<endl;
    srand(time(NULL));
    for (int i = 0; i<15; i++)
    {
        tab[i] = rand() % 21;
        cout << tab[i] << ", ";
        if (tab[i] % 2 == 0)
            parz++;
    }
    cout << endl;
    cout << endl;
    cout << "Liczb parzystych jest: " << parz;


    cout << "Zad_5" << endl;

    int tab[10];
    int liczba;
    cout << "Zadanie 5" << endl;
    cout << "Losowanie liczb: " <<endl;
    srand(time(NULL));
    for (int i = 0; i<10; i++)
    {
        tab[i] = rand() % 61-30;
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "Podaj liczbe calkowita: " << endl;
    cin >> liczba;
    for (int j = 0; j<10; j++)
    {
        tab[j] += liczba;
        cout << tab[j] << ", ";
    }


    cout << "Zadanie 6" << endl;
    int tab[10];
    int liczba;
    cout << "Losowanie liczb: " <<endl;
    srand(time(NULL));
    for (int i = 0; i<10; i++)
    {
        tab[i] = rand() % 31;
        cout << tab[i] << ", ";
        if (tab[i] >= 15)
            tab[i] = 1;
        else if (tab[i] < 15)
            tab[i] = 0;
    }
    cout << endl;
    for (int i = 0; i<10; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;


    cout << "Zadanie 7" << endl;
    int liczba1;
    int liczba2;
    int suma = 0;
    cout << "Losowanie liczb: " <<endl;
    srand(time(NULL));
    liczba1 = rand()%21;
    liczba2 = rand()%21;
    if(liczba1 <= liczba2)
        {
            for (int i = liczba1; i <= liczba2; i++)
            {
                suma += i;
            }
        }
    else if (liczba1 > liczba2)
    {
        for (int i = liczba2; i <= liczba1; i++)
            {
                suma += i;
            }
    }
    cout << endl;
    cout << liczba1 << ", " << liczba2;
    cout << endl;
    cout << suma;

    cout << "\nZad_8" << endl;

    cout << "n^2-1<100" <<endl;

    int n = 100;
    while(true)
    {
        if((n * n - 1) < 100)
            break;
        n--;
    }
    cout << "answer = " << n << endl;

    cout << "\nZad_9" << endl;

    ///9.1

   int tab_1[10];
    int tab_2[10];
    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        tab_1[i] = rand() % 11;
        tab_2[i] = rand() % 11;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << tab_1[i] << ", ";
    }
    cout << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << tab_2[i] << ", ";
    }
    cout << endl;
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        bool wystapila = false;
        int tmp = tab_1[i];
        for(int j = 0; j < 10; j++)
        {
            if(tab_2[j] == tmp)
                wystapila = true;
        }
        if(!wystapila)
            cout << tab_1[i] << ", ";
    }
    cout << endl;
    
    ///9.2
    int czy_zawiera = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(tab_1[j] == tab_2[i])
                {
                    czy_zawiera++;
                    break;
                }
        }
    }
    if(czy_zawiera == 10)
        cout << "Tab1 zawiera wszystkie elementy tab2" << endl;
    else
        cout << "Tab1 nie zawiera wszystkich elementow tab2" << endl;

    cout << "\nZad_10" << endl;

    int tab_10[10];
    for(int i = 0; i < 10; i++)
        tab_10[i] = i;


    print_tab(tab_10, 10);

    ///10.a
    bool czy_rosnacy = false;
    for(int i = 0; i < 10; i++)
    {

        if(tab_10[i] <= tab_10[i+1])
            czy_rosnacy = true;

        else
            break;
    }

    if(czy_rosnacy)
        cout << "ciag jest rosnacy" << endl;
    else
        cout << "ciag nie jest rosnacy" << endl;


    ///10.b
    int parz = 0;
    int nie_parz = 0;

    for(int i = 0; i < 10; i++)
    {
        if(tab_10[i] % 2 == 0)
            parz++;
        else
            nie_parz++;
    }
    //Zad Kol, znaki
    cout << "Parzyste: " << parz << endl;
    cout << "Nieparzyste: " << nie_parz << endl;
    
    char znak;
    while(znak!='a' && znak!='A')
    {
    cout<<"Podaj znak 'a' lub 'A': ";
    cin>>znak;
    }
    cout<<"Podano znak a lub A"<<endl;
    return 0;
    
    //ZAD Kol, tablica
    int tab[15];
    int suma;
    int isRoznica = 0;
    int pierwsza;
    srand(time(NULL));
    for (int i = 0; i < 15; i++)
    {
        tab[i] = rand()%41;
    }

    //Wypisanie element??w tablicy
    for (int i = 0; i < 15; i++)
    {
        cout << tab[i] << ", ";
    }

    //Je??li suma jest wi??ksza od 25 to j?? wypisz
     for (int i = 0; i < 15; i++)
    {
        if(tab[i]>25)
            suma += tab[i];
    }
    cout << endl;
    cout << "Suma = " << suma << endl;

    //Sprawdz czy w tab jest para liczb, ktorych roznica = 11
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if(tab[i] - tab[j] == 11 || tab[j] - tab[i] == 11)
                isRoznica++;
        }
    }
    cout << endl;
    if(isRoznica > 0)
        cout<<"W tablicy jest para, ktorej roznica jest 11"<<endl;
    else
        cout<<"W tablicy nie ma pary, ktorej roznica jest 11"<<endl;

    //Program zamienia elementy w tablicy wg zasady:
    //kazdy element jest suma siebie i pierwszego wyrazu

    cout<<"Tablica przed zamiana"<<endl;
    for (int i = 0; i < 15; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << endl;
    cout<<"Tablica po zamianie"<<endl;
    for (int i = 0; i < 15; i++)
    {
        pierwsza = tab[0];
        for(i = 0;i < 15; i++)
        {
            tab[i] += pierwsza;
        }
        for(i = 0;i < 15; i++)
        {
            cout<<tab[i]<<" ";
        }
    }
    return 0;
}
}
}

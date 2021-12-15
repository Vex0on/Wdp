#include <iostream>

using namespace std;

int czyPodzielna(int, int);
int ileCyfr(char []);

int main()
{
    int liczba1, liczba2;
    cout << "Liczba 1:" << endl;
    cin >> liczba1;
    cout << "Liczba 2:" << endl;
    cin >> liczba2;
    cout << czyPodzielna(liczba1, liczba2);
    cout << endl;
    char napis_2[25];
    cout << "Podaj napis z liczbami:" << endl;
    cin.getline(napis_2, 25);
    cout << "ile cyfr w napisie = " << ileCyfr(napis_2) << endl;
    return 0;
}

int czyPodzielna(int liczba1, int liczba2)
{
    if(liczba2 % liczba1 == 0)
        return 1;
    else
        return 0;
}

int ileCyfr(char napis[])
{
    int i = 0;
    int ile = 0;
    while(napis[i] != '\0')
        i++;
    for(int j = 0; j < i; j++)
    {
        if(napis[j] >= '0' && napis[j] <= '9')
            ile++;
    }
    return ile;
}

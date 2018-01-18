// Przekazywanie arg do funkcji, odebrane z main

#include <iostream>
using namespace std;

void wypisz(char* imie, char* nazwisko, int a, int b)
{
    cout << "Imie: " << imie << " Nazwisko: "<< nazwisko << " Liczby z zakresu od: " << a << " do: " << b << endl;
    double liczba = a;
    while (liczba <= b)
    {
        cout << liczba << " ";
        liczba += 0.5;
    }
};

int main(int argc, char* argv[])
{
    if (argc > 0)
    {
        char* imie, *nazwisko;
        int liczba_1, liczba_2;

        imie = argv[1];
        nazwisko = argv[2];
        liczba_1 = atoi(argv[2]);
        liczba_2 = atoi(argv[3]);

        wypisz(imie, nazwisko, liczba_1, liczba_2);
    }
    return 0;
}

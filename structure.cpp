#include <iostream>
using namespace std;


struct tablica
{
public:
    int n1,n2,n3,n4;
    int tab1D[100];
    void wypisz() {
        cout << n1 << n2;
        for (int i = 0; i < 100; i++)
            cout << tab1D[i];
    }
    void wypelnij() {};
};

void wypisz(int n1, int n2, double tab[])
{
    cout << n1 << n2;
    for (int i = 0; i < 100; i++)
        cout << tab[i];
}

int main(int argc, char* argv[])
{
    tablica obiektSTablica;
    obiektSTablica.n1 = 10;
    obiektSTablica.wypisz();

    cout << obiektSTablica.n1;

    return 0;
}
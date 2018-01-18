#include <iostream>
using namespace std;


struct moja_struktura
{
public:
    int n1,n2,n3,n4;
    int tab1D[100];
    void wypisz() {
        cout << n1 << n2;
        for (int i = 0; i < 100; i++)
            cout << tab1D[i];
    }
    void wypisz_2(moja_struktura x) {
        cout << x.n1;
        cin >> x.n1;
    };
};

void wypisz(int n1, int n2, double tab[])
{
    cout << n1 << n2;
    for (int i = 0; i < 100; i++)
        cout << tab[i];
}

int main(int argc, char* argv[])
{
    moja_struktura obiektSTablica;
    obiektSTablica.n1 = 10;
    obiektSTablica.wypisz();

    moja_struktura struktura_2;
    cout << struktura_2.n1;

    return 0;
}
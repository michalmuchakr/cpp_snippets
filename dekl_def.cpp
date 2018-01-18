#include <iostream>
#include <stdlib.h>
using namespace std;

struct los {
public:
    int tab[100];
    void wypelnij() {
        for (int i = 0; i < 100; i++)
            tab[i] = rand() % 10;
    }

    void wypelnij();
    void wypisz();
};

void los::wypelnij() {
    for (int i = 0; i < 100; i++)
        tab[i] = rand() % 10;
}

void los::wypisz() {
    for (int i = 0; i < 100; i++)
        cout << tab[i] << " ";
}

int main(int argc, char* argv[])
{
    los moj_los;
    moj_los.wypelnij();
    moj_los.wypisz();
    return 0;
}
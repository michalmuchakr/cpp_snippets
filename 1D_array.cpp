dyn, tablica 1d

#include <iostream>
using namespace std;

int main() {
    int rozmiar = 0;
    cin >> rozmiar;
    int* tablica1D = new int[rozmiar];


    for (int i = 0; i < rozmiar; i++)
    {
        tablica1D[i] = 0;
        cout << tablica1D[i] << " " << tablica1D << " ";
    }
}
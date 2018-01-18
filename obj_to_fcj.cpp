#include <iostream>
using namespace std;


struct kula
{
public:
    double promien;
    char* nazwa;
    double obj()
    {
        double obj;
        obj = (4 / 3) * 3.14 * pow(promien, 3);
        return obj;
    }
};
double powierzchnia(kula x)
{
    double powierzchnia;
    powierzchnia = 4 * 3.14 * pow(x.promien, 2);
    return powierzchnia;
};

int main(int argc, char* argv[])
{
    kula moja_kulka;
    moja_kulka.promien = 10;

    double obj_mojej_kuli = moja_kulka.obj();
    double pow_mojej_kuli = powierzchnia(moja_kulka);

    cout << "Obj kuli: " << obj_mojej_kuli << endl;
    cout << "Pow kuli: " << pow_mojej_kuli << endl;

    return 0;
}
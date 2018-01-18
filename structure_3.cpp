// obj kuli, struktura

#include <iostream>
using namespace std;


struct kula
{
public:
    double promien;
    char* nazwa;
    double obj(double promien)
    {
        double obj;
        obj = (4 / 3) * 3.14 * pow(promien, 3);
        return obj;
    }
};

int main(int argc, char* argv[])
{
    kula moja_kulka;
    moja_kulka.promien = 4;
    double obj_mojej_kuli = moja_kulka.obj(moja_kulka.promien);
    cout << obj_mojej_kuli;

    return 0;
}
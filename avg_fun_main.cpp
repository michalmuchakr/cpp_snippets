// wypisanie arg. funkcji przekazywanej do maina

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if (argc > 0)
    {
        for (int i = 0; i < argc; i++)
        {
            cout << argv[i] << endl;
        }
    };

    return 0;
}
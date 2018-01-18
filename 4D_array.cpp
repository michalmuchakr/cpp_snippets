tab 2d:
    int** tab = new int*[rozmiar];

tab4d:
    #include <iostream>
using namespace std;

int* generatePassowrd(int n);
void displayPassword(int* tableToDisplay, int rozmiar);


int main() {
    int rozmiar = 0;
    cout << "Podaj dlugosc hasla: " << endl;

    cin >> rozmiar;
    
    int**** tab = new int***[rozmiar];

    for (int i = 0; i < rozmiar; i++)
    {
        tab[i] = new int**[rozmiar];
    }

    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            tab[i][j] = new int*[rozmiar];
        }

    }
    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            for (int k = 0; k < rozmiar; k++)
            {
                tab[i][j][k] = new int[rozmiar];
            }
        }

    }


    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            for (int k = 0; k < rozmiar; k++)
            {
                for (int l = 0; l < rozmiar; l++)
                {
                    tab[i][j][k][l] = 0;
                    cout << tab[i][j][k][l] << " ";
                }
            }

        }

    }



    return 0;
}

int* generatePassowrd(int n)
{
    int* paswword = new int[n];

    for (int i = 0; i < n; i++)
    {
        paswword[i] = rand() % 26 + 97;
    }

    return paswword;
}
void displayPassword(int* tableToDisplay, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        char asciiChar = tableToDisplay[i];
        cout << asciiChar << " ";
    }
}
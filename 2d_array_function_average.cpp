#include <iostream>
//rand
#include <cstdlib>
//precision
#include <iomanip>

using namespace std;

void print(int ** tab, int, int);
int **create_tab(int, int);
void fill_tab(int **, int, int);
double calc_average(int **, int, int);

int main() {
  int size_row, size_kolumn, average_row;
  double average;

  cout << "wprowadz ilosc rzedow: " << endl;
  cin >> size_row;
  cout << "wprowadz ilosc kolumn: " << endl;
  cin >> size_kolumn;

  int **nowatab = create_tab(size_row, size_kolumn);

  fill_tab(nowatab, size_row, size_kolumn);

  cout << "twoja tablica: " << endl;
  print(nowatab, size_row, size_kolumn);
  cout << endl;

  cout << "average in row? " << endl;
  cin >> average_row;

  average = calc_average(nowatab, size_kolumn, average_row);
  cout << average;

  return 0;
}

void print(int **tab, int size_row, int size_kolumn)
{
  for (int i = 0; i < size_row; i++)
  {
    for (int j = 0; j < size_kolumn; j++)
    {
      cout << tab[i][j];
    }
    cout << endl;
  }
}

void fill_tab(int **tab, int size_row, int size_kolumn)
{

  for (int i = 0; i < size_row; i++)
  {
    for (int j = 0; j < size_kolumn; j++)
    {
      tab[i][j] = rand() % 10;
    }
  }
}

double calc_average(int **tab, int size_kolumn, int average_row)
{
  int sum = 0;
  double calc_average = 0;

  for (int i = 0; i < size_kolumn; i++)
  {
    sum += tab[average_row][i];
  }
  calc_average = sum / size_kolumn;

  return calc_average;
}


int **create_tab(int size_rowy, int size_kol)
{
  int **nowatab = new int *[size_rowy];

  for (int i = 0; i<size_rowy; i++)
    nowatab[i] = new int[size_kol];

  return nowatab;
}

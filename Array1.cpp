#include <iostream>
using namespace std;
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  cout << "Masukkan jumlah baris (Dari 1-100) : ";
  cin >> r;

  cout << "Masukkan (Dari 1-100) : ";
  cin >> c;

  cout << endl << "Masukkan Matriks pertama : " << endl;

  for (i = 0; i < r; ++i)
    for (j = 0; j < r; ++j) {
      cout << "Matriks a = " << a + 1 << j + 1 << " : ";
      cin >> a[i][j];
    }
  cout << endl << "Masukkan Matriks kedua : " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < r; ++j) {
      cout << "Matriks b = " << i + 1 << j + 1 << " : ";
      cin >> b[i][j];
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] +  b[i][j];
      cout << endl << "Penjumlahan kedua matriks: " << endl;
      for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
          cout << sum[i][j] << " ";
          if (j == c - 1)
            cout << endl;
        }
    }
}
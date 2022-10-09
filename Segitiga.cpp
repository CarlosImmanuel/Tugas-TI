#include <iostream>
using namespace std;

int main ()
{
  int tinggi_segitiga, a, b;

  cout << "~~ Program C++ Segitiga Bintang ~~" << endl;
  cout << "==================================" << endl;

  cout << "Masukkan Tinggi Segitiga : ";
  cin >> tinggi_segitiga;

  for (a=1; a<=tinggi_segitiga; a++){
    for (b=1; b<=a; b++){
      cout << " *";
    }
    cout << endl;
  }
  getchar ();
}
#include <iostream>
using namespace std;
#define phi 3.14;

int main()
{
  double jari_jari, tinggi, luas, volume;
  cout << "Masukkan jari_jari = ";
  cin >> jari_jari;

  cout << "Masukkan tingginya = ";
  cin >> tinggi;

  luas = jari_jari*jari_jari*phi;
  volume = jari_jari*jari_jari*tinggi*phi;

  cout << "Luas tabung adalah = " << luas << endl;
  cout << "Volume tabung adalah = " << volume << endl;
  return 0;
}
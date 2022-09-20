#include <iostream>
using namespace std;
#define harga 4500

int main ()

{
  float jumlah, total;
  cout << "Masukkan jumlah barang = ";
  cin >> jumlah;
  total = harga*jumlah;
  cout << "Yang harus dibayar = " << total << endl;
  
}
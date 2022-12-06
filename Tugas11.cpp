#include <iostream>
using namespace std;
int main() {
  int a, *bil;
  bil=&a;
  *bil=200;

  cout << *bil << " ";
  (*bil)++;
  cout << *bil << " ";
  (*bil)--;
  cout << *bil << " ";

  cout << "\nMasukkan Nilai = ";
  cin >> a;
  if ((*bil)%2==1){
    cout << *bil << " Merupakan Bilangan Ganjil" << endl;
  }
  else {
    cout << *bil << " Merupakan Bilangan Genap" << endl;
  }
  getchar();
}
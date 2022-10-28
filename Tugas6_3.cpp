#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main(){
  char a1[20];
  char a2[20];

  cout << "Kalimat1 = ";
  cin >> a1;
  cout << "Kalimat2 = ";
  cin >> a2;

  strcat(a1,a2);
  cout << "Menjadi : " << a1 << endl;
  getchar ();
}
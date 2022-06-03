#include <iostream>
using namespace std;

int main () {

float anos, meses, dias, d;
cout << "Informe a sua idade.\nAnos:";
cin >> anos;
cout << "Meses:";
cin >> meses;
cout << "Dias:";
cin >> dias;
d = (dias+(anos*365)+(meses*30)) ;
cout << "A sua idade em dias é: " <<d;

}

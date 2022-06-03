#include <iostream>
using namespace std;

int main () {

float f, c;

cout << "Digite a temperatura em Fahrenheit:\n";
cin >> f;
c = ((f-32)*5)/9;
cout << "A conversão de " << f << " graus Fahrenheit em Celsius é: " <<c;

}

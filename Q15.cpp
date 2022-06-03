#include <iostream>
using namespace std;
#define PI 3.14

int main () {
float graus, radianos, pi;

cout << "Informe um valor em graus Celsius: \n";
cin >> graus;

pi = 3.14;
radianos = (graus*pi)/180;

cout <<radianos<< " radianos que equivalem a " <<graus<< " graus Celsius!";

}

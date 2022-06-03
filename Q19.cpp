#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float distancia, tempo, velocidade;

cout << "Digite a distancia em quilometros: ";
cin >> distancia;

cout << "Digite o tempo em minutos: ";
cin >> tempo;

velocidade = (distancia * 1000) / (tempo * 60);

cout << "A velocidade é: " << velocidade << " m/s";

}

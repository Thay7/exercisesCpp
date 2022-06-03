#include <iostream>
using namespace std;

int main () {

float A, B, adicao, subtracao, multiplicacao, divisao;

cout << "Digite o primeiro valor: \n";
cin >> A;
cout << "Digite o segundo valor: \n";
cin >> B;

adicao = A+B;
subtracao = A-B;
multiplicacao = A*B;
divisao = A/B;

cout << "O resultado das quatro operações básicas é: \nAdição: " <<adicao<< "\nSubtração: " <<subtracao << "\nMiltiplicação: " <<multiplicacao<< "\nDivisão: " <<divisao;


} 

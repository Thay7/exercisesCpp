#include <iostream>
using namespace std;

int main () {

float totalcarros, totalvendas, salariofx, valorrpc, salariof, comissao;

cout << "Número total de carros vendidos no mês: ";
cin >> totalcarros;
cout << "Valor total das vendas: ";
cin >> totalvendas;
cout << "Salário do funcionário: ";
cin >> salariofx;
cout << "Valor da comissão por carro vendido: ";
cin >> valorrpc;

comissao = valorrpc*totalcarros;
salariof = salariofx+comissao+totalvendas*0.5;

cout << "O salário final do funcionário será de: " <<salariof;

}


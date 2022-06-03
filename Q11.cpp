#include <iostream>
using namespace std;

int main () {

float custodefabrica, distribuidor, impostos, cfinal;
cout << "Informe o custo de fábrica: ";
cin >> custodefabrica;

distribuidor = custodefabrica*0.28;
impostos = custodefabrica*0.45;
cfinal = custodefabrica+distribuidor+impostos;

cout << "O custo final ao consumidor será de: " <<cfinal;

}



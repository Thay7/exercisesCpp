#include <iostream>
using namespace std; 
 int main () {
 
float total, b, n, v, pbrancos, pnulos, pvalidos;

cout << "Informe o número total de eleitores: ";
cin >> total;
cout << "Informe o número total de votos brancos: ";
cin >> b;
cout << "Informe o número total de votos nulos: ";
cin >> n;
cout << "Informe o número total de votos válidos: ";
cin >> v;

pbrancos = b*total/100; 
pnulos = n*total/100;
pvalidos = v*total/100;
 
cout << "Os votos brancos são " <<pbrancos<< "% do total de votos. \n";
cout << "Os votos nulos são " <<pnulos<< "% do total de votos. \n";
cout << "Os votos válidos são " <<pvalidos<< "% do total de votos. \n";

}


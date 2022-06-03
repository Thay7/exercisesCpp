#include <iostream>
using namespace std; 
 int main () {
 
float salario, reajuste, novosalario;

cout << "Informe o salário atual: ";
cin >> salario;
cout << "Informe o percentual de reajuste: ";
cin >> reajuste;

novosalario = reajuste/100*salario+salario;

cout << "O novo salário é " <<novosalario;

}

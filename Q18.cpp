#include <iostream>
using namespace std;
int main()
{
int numero, antecessor, sucessor;

cout << "Digite um numero: ";
cin >> numero;

antecessor = numero - 1;
sucessor = numero + 1;

cout << "O antecessor do numero digitado é: " << antecessor<< "\nE o sucessor é: " <<sucessor;


}

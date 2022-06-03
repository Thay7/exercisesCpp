#include <iostream>
using namespace std;

int main () {

float a1, a2, a3, p1, p2, p3, tpesos, mediap;

cout << "Qual a primeira nota?\n";
cin >> a1;
cout << "Qual a segunda nota?\n";
cin >> a2;
cout << "Qual a terceira nota?\n";
cin >> a3;

p1 = 2;
p2 = 3;
p3 = 5; 

tpesos = p1+p2+p3;

mediap = (p1*a1+p2*a2+p3*a3)/tpesos;

cout << "A média ponderada será: " <<mediap;

}


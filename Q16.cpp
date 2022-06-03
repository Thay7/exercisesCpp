#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float pes, metros;

    cout << "Digite a medida em pés: ";
    cin >> pes;

    metros = pes * 0.3048;

    cout << "A medida em metros é: " << metros;
};
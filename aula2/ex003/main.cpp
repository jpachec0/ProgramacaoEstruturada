#include <iostream>
#include <string.h>

using namespace std;

int main(){
    double base, altura, perimetro;
    cout << "Digite a base do retângulo: ";
    cin >> base;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    perimetro = 2 * (base + altura);

    cout << "O perímetro do retângulo é: " << perimetro << endl;

    return 0;
}
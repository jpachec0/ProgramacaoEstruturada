#include <iostream>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;

    cout << "Digite um número de 1 a 6: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "Você digitou um." << endl;
            break;
        case 2:
            cout << "Você digitou dois." << endl;
            break;
        case 3:
            cout << "Você digitou três." << endl;
            break;
        case 4:
            cout << "Você digitou quatro." << endl;
            break;
        case 5:
            cout << "Você digitou cinco." << endl;
            break;
        case 6:
            cout << "Você digitou seis." << endl;
            break;
        default:
            cout << "Número inválido. Por favor, digite um número entre 1 e 6." << endl;
    }

    return 0;
}
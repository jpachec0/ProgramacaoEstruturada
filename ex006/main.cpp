#include <iostream>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int operacao;
    float num1, num2;

    cout << "Calculadora Simples" << endl;
    cout << "Escolha a operação que deseja realizar:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\nDigite o número correspondente: ";
    cin >> operacao;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    switch (operacao) {
        case 1:
            cout << "Resultado da adição: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado da subtração: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado da multiplicação: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado da divisão: " << num1 / num2 << endl;
            } else {
                cout << "Erro: Divisão por zero não é permitida." << endl;
            }
            break;
        default:
            cout << "Operação inválida. Por favor, escolha um número entre 1 e 4." << endl;
    }

    return 0;
}
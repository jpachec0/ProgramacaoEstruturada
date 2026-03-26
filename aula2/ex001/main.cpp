#include <iostream>
#include <string.h>

using namespace std;

int main(){
    //código para permitir caracteres especiais impressos no terminal
    setlocale(LC_ALL, "Portuguese");

    //vamos ver entrada com o codigo cin
    //soma de 2 numeros inteiros
    double num1,num2, soma, multiplicacao, subtracao, divisao;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    soma = num1 + num2;
    multiplicacao = num1 * num2;
    subtracao = num1 - num2;
    divisao = num1 / num2;
    cout << "A soma dos números é: " << soma << endl;
    cout << "A multiplicação dos números é: " << multiplicacao << endl;
    cout << "A subtração dos números é: " << subtracao << endl;
    cout << "A divisão dos números é: " << divisao << endl;
}
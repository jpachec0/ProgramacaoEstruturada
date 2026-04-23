#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const double cotacaoDolar = 5.20;
    const double cotacaoEuro = 5.70;
    const double cotacaoLibra = 6.50;

    double valorReais, valorConvertido;
    int opcao;

    cout << "Digite o valor em reais: ";
    cin >> valorReais;

    cout << "\nEscolha a moeda para conversao:" << endl;
    cout << "1 - Dolar" << endl;
    cout << "2 - Euro" << endl;
    cout << "3 - Libra" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    cout << fixed << setprecision(2);

    switch (opcao) {
        case 1:
            valorConvertido = valorReais / cotacaoDolar;
            cout << "Valor convertido em dolar: US$ " << valorConvertido << endl;
            break;
        case 2:
            valorConvertido = valorReais / cotacaoEuro;
            cout << "Valor convertido em euro: EUR " << valorConvertido << endl;
            break;
        case 3:
            valorConvertido = valorReais / cotacaoLibra;
            cout << "Valor convertido em libra: GBP " << valorConvertido << endl;
            break;
        default:
            cout << "Opcao invalida." << endl;
            break;
    }

    return 0;
}

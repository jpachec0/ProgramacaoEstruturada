#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int quantidadeLivros;
    double valorTotal, percentualDesconto, valorDesconto, valorFinal;

    cout << "Digite a quantidade de livros: ";
    cin >> quantidadeLivros;

    cout << "Digite o valor total da compra: ";
    cin >> valorTotal;

    if (quantidadeLivros > 5 || valorTotal > 300.0) {
        percentualDesconto = 20.0;
    } else {
        percentualDesconto = 5.0;
    }

    valorDesconto = valorTotal * (percentualDesconto / 100.0);
    valorFinal = valorTotal - valorDesconto;

    cout << fixed << setprecision(2);
    cout << "Percentual aplicado: " << percentualDesconto << "%" << endl;
    cout << "Valor do desconto: R$ " << valorDesconto << endl;
    cout << "Valor final com desconto: R$ " << valorFinal << endl;

    return 0;
}

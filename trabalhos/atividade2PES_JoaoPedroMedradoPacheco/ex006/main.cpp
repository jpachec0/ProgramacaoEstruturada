#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double rendaMensal, valorPrestacao, limitePrestacao;

    cout << "Digite a renda mensal: ";
    cin >> rendaMensal;

    cout << "Digite o valor da prestacao: ";
    cin >> valorPrestacao;

    limitePrestacao = rendaMensal * 0.30;

    cout << fixed << setprecision(2);

    if (rendaMensal > 3500.0 && valorPrestacao <= limitePrestacao) {
        cout << "Emprestimo aprovado." << endl;
    } else {
        cout << "Emprestimo nao aprovado." << endl;
    }

    cout << "Limite maximo da prestacao: R$ " << limitePrestacao << endl;

    return 0;
}

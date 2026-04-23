#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const double precoInteira = 30.00;
    const double precoMeia = precoInteira / 2.0;

    int idade;
    char estudante;
    bool recebeDesconto;

    cout << "Digite a idade do cliente: ";
    cin >> idade;

    cout << "O cliente e estudante? (S/N): ";
    cin >> estudante;

    recebeDesconto = (estudante == 'S' || estudante == 's') || idade >= 60;

    cout << fixed << setprecision(2);

    if (recebeDesconto) {
        cout << "Preco final: R$ " << precoMeia << endl;

        if ((estudante == 'S' || estudante == 's') && idade >= 60) {
            cout << "Motivo do desconto: estudante e idade igual ou superior a 60 anos." << endl;
        } else if (estudante == 'S' || estudante == 's') {
            cout << "Motivo do desconto: estudante." << endl;
        } else {
            cout << "Motivo do desconto: idade igual ou superior a 60 anos." << endl;
        }
    } else {
        cout << "Preco final: R$ " << precoInteira << endl;
        cout << "Motivo: nao possui direito a meia-entrada." << endl;
    }

    return 0;
}

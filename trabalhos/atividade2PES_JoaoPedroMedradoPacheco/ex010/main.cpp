#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int horas, tipoUsuario;
    double valorPagar;

    cout << "Digite a quantidade de horas estacionadas: ";
    cin >> horas;

    if (horas <= 0) {
        cout << "Tempo invalido." << endl;
        return 0;
    }

    cout << "Digite o tipo de usuario (1-aluno, 2-professor, 3-visitante): ";
    cin >> tipoUsuario;

    switch (tipoUsuario) {
        case 1:
            if (horas <= 2) {
                valorPagar = 5.00;
            } else if (horas <= 5) {
                valorPagar = 8.00;
            } else {
                valorPagar = 12.00;
            }
            break;
        case 2:
            if (horas <= 2) {
                valorPagar = 3.00;
            } else if (horas <= 5) {
                valorPagar = 6.00;
            } else {
                valorPagar = 10.00;
            }
            break;
        case 3:
            if (horas <= 2) {
                valorPagar = 10.00;
            } else if (horas <= 5) {
                valorPagar = 15.00;
            } else {
                valorPagar = 20.00;
            }
            break;
        default:
            cout << "Tipo de usuario invalido." << endl;
            return 0;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valorPagar << endl;

    return 0;
}

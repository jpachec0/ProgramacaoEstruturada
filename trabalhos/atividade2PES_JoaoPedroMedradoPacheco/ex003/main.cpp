#include <iostream>

using namespace std;

int main() {
    int dia, mes, ultimoDia;

    cout << "Digite o dia de nascimento: ";
    cin >> dia;

    cout << "Digite o mes de nascimento: ";
    cin >> mes;

    if (mes < 1 || mes > 12) {
        cout << "Data invalida." << endl;
        return 0;
    }

    if (mes == 2) {
        ultimoDia = 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        ultimoDia = 30;
    } else {
        ultimoDia = 31;
    }

    if (dia >= 1 && dia <= ultimoDia) {
        cout << "Data valida." << endl;
    } else {
        cout << "Data invalida." << endl;
    }

    return 0;
}

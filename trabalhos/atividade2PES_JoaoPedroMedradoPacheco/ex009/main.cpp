#include <iostream>

using namespace std;

int main() {
    int mes;

    cout << "Digite o numero do mes: ";
    cin >> mes;

    if (mes >= 1 && mes <= 3) {
        cout << "Estacao do ano: Verao" << endl;
    } else if (mes >= 4 && mes <= 6) {
        cout << "Estacao do ano: Outono" << endl;
    } else if (mes >= 7 && mes <= 9) {
        cout << "Estacao do ano: Inverno" << endl;
    } else if (mes >= 10 && mes <= 12) {
        cout << "Estacao do ano: Primavera" << endl;
    } else {
        cout << "Mes invalido." << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int ddd;

    cout << "Digite o DDD: ";
    cin >> ddd;

    switch (ddd) {
        case 11:
            cout << "Cidade: Sao Paulo" << endl;
            break;
        case 19:
            cout << "Cidade: Campinas" << endl;
            break;
        case 21:
            cout << "Cidade: Rio de Janeiro" << endl;
            break;
        case 31:
            cout << "Cidade: Belo Horizonte" << endl;
            break;
        case 17:
            cout << "Cidade: Sao Jose do Rio Preto / Votuporanga" << endl;
            break;
        default:
            cout << "DDD nao cadastrado." << endl;
            break;
    }

    return 0;
}

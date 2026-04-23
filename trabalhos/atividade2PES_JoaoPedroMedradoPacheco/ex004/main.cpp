#include <iostream>

using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra minuscula: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra digitada e uma vogal." << endl;
    } else {
        cout << "A letra digitada nao e uma vogal. Caractere informado: " << letra << endl;
    }

    return 0;
}

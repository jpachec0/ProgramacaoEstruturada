#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    string nome1, nome2="Joao Pedro";

    cout << "Digite seu nome: ";
    getline(cin, nome1);
    if(nome1 == nome2){
        cout << "Olá, " << nome1 << "! Você tem o mesmo nome que o João Pedro!" << endl;
    } else {
        cout << "Olá, " << nome1 << "! Seja bem-vindo!" << endl;
    }
    return 0;
}
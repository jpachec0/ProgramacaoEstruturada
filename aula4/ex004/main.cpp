#include <iostream>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idadeUsuario, tipoUsuario;

    cout << "Verificador de acesso (>=18 anos ou VIP)" << endl;
    cout << "Qual é a sua idade? ";
    cin >> idadeUsuario;
    cout << "Você é um usuário VIP? (1-Sim 2-Não): ";
    cin >> tipoUsuario;

    if(idadeUsuario >= 18 || tipoUsuario == 1){
        cout << "Acesso concedido! Bem-vindo, usuário VIP!" << endl;
    } else{
        cout << "Acesso negado. Você precisa ser maior de idade ou um usuário VIP para acessar." << endl;
    }
}
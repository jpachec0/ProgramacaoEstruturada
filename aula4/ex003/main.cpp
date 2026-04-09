#include <iostream>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int clima, dinheiro;

    cout << "Decididor de viagem" << endl;

    cout << "Hoje o clima está de sol ou chuva?\n1-Sol\n2-Chuva\nDigite o número correspondente: ";
    cin >> clima;

    cout << "Quanto dinheiro você tem disponível para gastar? ";
    cin >> dinheiro;

    if(clima==1 && dinheiro >=2000){
        cout<< "Perfeito! Tudo pronto pra viajar!" << endl;
    } else{
        cout << "Infelizmente, hoje não é um bom dia para viajar." << endl;
    }
}
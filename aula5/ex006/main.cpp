#include <iostream>

using namespace std;

int main(){
    int  i, num, soma, somaDiv3, somaNaoDiv3;
    float media;

    soma = 0;
    somaDiv3 = 0;
    somaNaoDiv3 = 0;

    for(i=1;i<=8;i++){
        cout << "Digite o " << i << "o. numero: ";
        cin >> num;
        if(num%3==0){
            cout << num << " é divisível por 3" << endl;
            somaDiv3 += num;
        } else {
            cout << num << " não é divisível por 3" << endl;
            somaNaoDiv3 += num;
        }
        soma += num;
    }
    media = (float)soma / 8;
    cout << "A média é: " << media << endl;
    cout << "A soma é: " << soma << endl;
    cout << "A soma dos números divisíveis por 3 é: " << somaDiv3 << endl;
    cout << "A soma dos números não divisíveis por 3 é: " << somaNaoDiv3 << endl;
    return 0;
}
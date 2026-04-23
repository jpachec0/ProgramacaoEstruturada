#include <iostream>

using namespace std;

int main(){
    int  i, n, num, contDiv2, quantidade50a100, soma50a100;
    float media;

    contDiv2 = 0;
    quantidade50a100 = 0;
    soma50a100 = 0;

    cout << "Digite quantos números você deseja inserir: ";
    cin >> n;

    for(i=1;i<=n;i++){
        cout << "Digite o " << i << "o. numero: ";
        cin >> num;
        if(num%2==0){
            cout << num << " é divisível por 2" << endl;
            contDiv2++;
        } else {
            cout << num << " não é divisível por 2" << endl;
        }
        if(num>=50 && num<=100){
            quantidade50a100++;
            soma50a100 += num;
        }
    }
    cout << "A quantidade de números divisíveis por 2 é: " << contDiv2 << endl;
    cout << "A quantidade de números entre 50 e 100 é: " << quantidade50a100 << endl;
    cout << "A soma dos números entre 50 e 100 é: " << soma50a100 << endl;
    return 0;
}
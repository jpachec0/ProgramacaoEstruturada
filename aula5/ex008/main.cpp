#include <iostream>

using namespace std;

int main(){
    int n;
    while(n!=0){
        cout<<"\nDigite um número (0 para sair): ";
        if (n%2==0){
            cout<<n<<" é par"<<endl;
        } else {
            cout<<n<<" é ímpar"<<endl;
        }
    }
    return 0;
}
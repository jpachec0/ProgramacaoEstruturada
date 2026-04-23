#include <iostream>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, valorInicial;
    cout<<"\nDigite o valor inicial: ";
    cin>>valorInicial;

    for(i = 1;i<=5;i++){
        cout<<(valorInicial += 1)<<endl;
    }
}
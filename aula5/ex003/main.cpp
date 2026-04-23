#include <iostream>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, numIteracoes;

    cout<<"\nDigite o número de iterações: ";
    cin>>numIteracoes;

    for(i = 11;i<=numIteracoes+11;i++){
        cout<<i<<endl;
    }
}
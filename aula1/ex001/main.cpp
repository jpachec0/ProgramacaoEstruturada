//Vamos inserir nas proximas linhas algumas bibliotecas
/*As bibliotecas são arquivos que contêm código pré-escrito que podemos utilizar em nosso programa*/
#include <iostream>
#include <string.h>
using namespace std;

//Função principal do programa, onde a execução começa
int main(){
    //Cout serve para imprimir algo na tela, e endl serve para pular uma linha
    //O << é o operador de inserção, que insere o que está à direita dele na saída padrão (tela)
    cout<< "Hello, world" <<endl;
    //Pode-se usar o \n para pular uma linha, mas o endl é mais recomendado pois ele também limpa o buffer de saída
    cout<< "\nHello, world";
    return 0; //Retorna 0 para indicar que o programa terminou com sucesso
}
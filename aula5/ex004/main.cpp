#include<iostream>
#include<string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i,num;

    cout<<"\nDigite o número para a tabuada: ";
    cin>>num;

    for(i = 1;i<=10;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
}
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "A palavra digitada foi: " << palavra << endl;
    return 0;
}
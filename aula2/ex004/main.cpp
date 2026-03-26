#include <iostream>
#include <string.h>

using namespace std;

int main(){
    double celsius, fahrenheit;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl;

    return 0;
}
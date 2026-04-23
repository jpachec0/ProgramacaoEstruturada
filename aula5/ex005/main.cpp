//media 3 notas com for
#include <iostream>

using namespace std;

int main()
{
    float nota, media;
    int i;

    media = 0;

    for (i = 1; i <= 3; i++)
    {
        cout << "Digite a " << i << "a. nota: ";
        cin >> nota;
        media = media + nota;
    }

    media = media / 3;

    cout << "A média é: " << media << endl;

    return 0;
}
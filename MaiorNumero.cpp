#include <iostream>
using namespace std;

int main() {
    int num1, num2, maior;

    cout << "Digite o primeiro numero:  ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    // Comparando os dois números
    if (num1 > num2) {
        maior = num1;
    } else {
        maior = num2;
    }

    cout << "O maior numero e: " << maior << endl;

    return 0;
}
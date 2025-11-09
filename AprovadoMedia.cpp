#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis n1, n2, n3 para as notas
    float num1, num2, num3;

    // Entrada dos valores das tres notas, deixei de um jeito mais facil para entender
    cout << "Digite 3 notas: ";
    cin >> num1 >> num2 >> num3;
    
    float media = (num1 + num2 + num3) / 3;

    // isso é um estrutura condicional para verificar se todas as notas são maiores que 5
    if (num1 >= 5 && num2 >= 5 && num3 >= 5)

// Exibição do resultado da media, com as definições de aprovado e reprovado, que seja exibido no terminal
        cout << "Aprovado! Media: " << media << endl;
    else
        cout << "Reprovado! Media: " << media << endl;

    return 0;
}
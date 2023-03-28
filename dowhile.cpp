// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
// Variaveis
    int num;
// Programa roda o codigo enquanto o numero nao e entre 1 e 10
    do{
// Output pedindo input do usuario
        cout << "Digite um numero entre 1 a 10: ";
// Input do usuario
        cin >> num;
// enquanto o numero nao e entre 1 e 10, repete o codigo acima
    } while(num<1 || num >10);
// Output mostrando o input valido do usuario
    cout << "Voce digitou o numero " << num << ".";
    
    return 0;
}
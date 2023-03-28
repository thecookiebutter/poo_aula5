// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
// Variavel
    int num;
// Output pedindo input do usuario
    cout << "Digite um numero inteiro positivo: ";
// Input do usuario
    cin >> num;
// Output explicando resultado
    cout << "Os primeiros " << num << " numeros pares sao: ";
// Calculo do resultado, sendo realizadas iteracoes ate que o numero de iteracoes chegue ao numero de numeros pares equivalente ao input do usuario
    for(int i = 2; i <= num*2; i += 2){
        cout << i << " ";
    }
    
    return 0;
    }
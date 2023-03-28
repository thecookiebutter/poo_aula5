// Funcoes importadas
#include <iostream>
using namespace std;
// Funcao de soma de 2 inteiros
int Soma( int a, int b)
{   int Resultado;
    // Calculo matematico do resultado
    Resultado = a + b;
    return Resultado;
};
// Funcao de subtracao de 2 inteiros
int Subtracao( int a, int b){
    // Declaracao de variavel de resultado
    int Resultado;
    // Calculo matematico do resultado
    Resultado = a - b;
    return Resultado;
};
// Funcao de multiplicacao de 2 inteiros
int Multiplicacao( int a, int b){
    // Declaracao de variavel de resultado
    int Resultado;
    // Calculo matematico do resultado
    Resultado = a * b;
    return Resultado;
};
// Funcao de divisao de 2 inteiros
int Divisao( int a, int b){
    // Declaracao de variavel de resultado
    int Resultado;
    // Calculo matematico do resultado
    Resultado = a / b;
    return Resultado;
};

int main() {
// Declacacao de variaveis
    int c,d;
// Output pedindo input do usuario
    cout << "ENTRE COM OS 2 VALORES: ";
    cin >> c;
    cin >> d;
// Output mostrando resultados
    cout << "O resultado da soma e: " << Soma(c,d) << endl;
    cout << "O resultado da subtracao e: " << Subtracao(c,d) << endl;
    cout << "O resultado da multiplicacao e: " << Multiplicacao(c,d) << endl;
    cout << "O resultado da divisao e: " << Divisao(c,d) << endl;
    return 0;
}
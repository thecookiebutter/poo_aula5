// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
// Variaveis
    char op;
    float num1, num2;
    string continuar = "S";
// Programa roda o codigo enquando o usuario quiser baseado em um string
    do{
// Input do usuario para operador
    cout << "ENTRE COM O OPERADOR: +, -, *, /: ";
    cin >> op;
// Input do usuario para variaveis
    cout << "ENTRE COM 2 VALORES: ";
    cin >> num1 >> num2;
// Muda o codigo dependendo do input de operador do usuario e imprime o resultado
    switch(op){
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;
    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;
    case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;
    case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    break;
// Caso o usuario nao tenha inputado nenhum dos acima
    default: 
    cout << "OPERADOR INVALIDO, FAVOR INSERIR O OPERADOR CORRETO.";
    break;
    }
// Informa ao usuario que pode continuar, mudando a string
    cout << "QUER CONTINUAR: PRESSIONE S" << endl;
    cin >> continuar;
    } while(continuar == "S");
    return 0;
}
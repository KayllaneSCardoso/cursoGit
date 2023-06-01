#include <iostream>
#include <stdlib.h>
using namespace std;
int calcula(int n1, int n2, int calcOperador, int &i){
    int resultado;
    switch(calcOperador){
        case '+': resultado = n1 + n2;
        break;
        case '-': resultado = n1 - n2;
        break;
        case '*': resultado = n1 * n2;
        break;
        case '/': resultado = n1/n2;
        break;
        default:
        i = 0;
        return 0;
    }
    i = 1;
    return resultado;
}

int main(){
	int numOne, numTwo, i, resultadoCalculo;
	char operador;
	cout << "Insira o primeiro numero:\n";
	cin >> numOne;
	cout << "Insira o segund numero:\n";
	cin >> numTwo;
	cout << "Insira a operacao a ser realizada: (+ 'soma', -'subtracao', * 'multiplicacao' e / 'divisao')\n";
	cin >> operador;
	resultadoCalculo = calcula(numOne,numTwo, operador, i);
	i != 1 ? cout << "selecione um numero ou operador valido!" : cout << numOne << operador << numTwo << " = " << resultadoCalculo;
}

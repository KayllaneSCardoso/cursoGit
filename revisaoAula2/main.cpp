#include <iostream>
#include <stdLib.h>
using namespace std;
int calcula(int n1, int n2, int calcOperador){
    int resultado;
    switch(calcOperador){
        case '+': resultado = n1 + n2;
        break;
    }
}

int main(){
	int numOne, numTwo;
	char operador;
	cout << "Insira o primeiro numero:\n";
	cin >> numOne;
	cout << "Insira o segund numero:\n";
	cin >> numTwo;
	cout << "Insira a operacao a ser realizada: (+ 'soma', -'subtracao', * 'multiplicacao' e / 'divisao')\n";
	cin >> operador;
		return 0;
}

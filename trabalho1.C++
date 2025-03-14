#include <iostream>                                                                                               

using namespace std;

int main() {

float pesopeixe, multa, excesso;
//entrada

cout << "Informe o peso do peixe: ";
cin >> pesopeixe;

//processo

if (pesopeixe > 50) {

	excesso = pesopeixe - 50;
	multa = excesso * 4;
		
	cout << "Peixe acima do regulamento" << endl;
	cout << "Valor da multa a ser paga e: " << multa;
		}
		
else {
	cout << "Peso do peixe OK";
		}
		
	return 0;
}

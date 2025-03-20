#include <iostream>

using namespace std;

int main() {
	//variaveis
	float numero;
	
	//entrada
	cout << "Informe o valor numerico: ";
	cin >> numero;
	
	if (numero > 0) {//if
	
		cout << "seu numero e positivo";
	
	}//if
	
	else if (numero < 0) {//else if
	
		cout << "seu numero e negativo";
	
	}//else if
	
	else {//else
		
		cout << "seu numero e zero";
		
	}//else
	
	return 0;
}

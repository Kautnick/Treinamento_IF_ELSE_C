#include <iostream>

using namespace std;

int main() {
//variaveis
string nome;
float valorvendas, salario;
//entrada
	cout << "nome do funcionario: ";
	cin >> nome;
	cout << "Qual o valor total vendido pelo funcionario: ";
	cin >> valorvendas;
//processo
if (valorvendas >= 20000) {//if
	
	salario = valorvendas * 0.1;
	cout << "salario do funcionario e: " << salario << endl;
	
		}//if
		
else {//else

	salario = valorvendas * 0.07;
	cout << "salario do funcionario e  " << salario << endl;

		}//else
		
	return 0;
 }

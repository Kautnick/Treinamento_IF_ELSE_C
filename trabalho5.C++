#include <iostream>

using namespace std;

int main() {
	string nomealuno, materia;
	float nota1, nota2,nota3, notafinal;
	
	//introdução
	
	cout << "Cronograma de notas do alunos, lembrando, nao vale mentir(:" << endl;
	cout << "Digite o nome do aluno e suas 3 notas nos campos a seguir" << endl;
	
	//entrada de dados
	//nome do aluno
	cout << "Nome do aluno: ";
	cin >> nomealuno;
	
	//materia
	cout << "digite a materia: ";
	cin >> materia;
	
	//notas
	cout << "nota 1: ";
	cin >> nota1;
	cout << "nota 2: ";
	cin >> nota2;
	cout << "nota 3: ";
	cin >> nota3;
	
	//processo
	
	notafinal = nota1 + nota2 + nota3;
	
	if (notafinal > 10) {//else 
		
		cout << "Tem certeza que digitou as notas corretamente" << endl;
		
	}
	
	else if (notafinal >= 7) {//if
	
		cout << "felizmente voce passou nessa materia" << endl;
		cout << "sua nota final e: " << notafinal << endl;
	
		}//if
	
	else if (notafinal >= 5 ) {//elseif
	
		cout << "infilizmente voce pegou recuperacao nessa materia" << endl;
		cout << "sua nota final e: " << notafinal << endl;
	
		}//elseif
	
	else if (notafinal < 5) {//elseif1
	
		cout << "Infelizmente voce reprovou nessa materia" << endl;
		cout << "Sua nota final e: " << notafinal << endl;
			
			}//elseif1

				return 0;
	
} 

 #include <iostream>

using namespace std;

int main() {
//variaveis
	string sexo;
	float altura, pesoideal;
	
		//entrada
		cout << "digite qual o seu sexo (masculino ou feminino): ";
		cin >> sexo;
		cout << "qual a sua altura(em metros): ";
		cin >> altura;
		
	if (sexo == "masculino") {//if
	
		pesoideal = 72.7 * altura - 58;
		cout << "seu peso ideal e: " << pesoideal << "KG" << endl;
	
	}//if
	
	else {//else
	
		pesoideal = 62.1 * altura - 44.7;
		cout << "seu peso ideal e: " << pesoideal << "KG" << endl;
	
	}//else
	
	return 0;
}

#include <iostream>

//Fa�a um algoritmo que leia dois n�meros e indique se s�o iguais ou se s�o diferentes.
// Mostre o maior e o menor (nesta sequ�ncia).

using namespace std;

int main() {
	
	int num1, num2=0;
	
	cout << "Digite o primeiro numero: ";
	cin>> num1;
	
	cout << "Digite o segundo numero: ";
	cin>> num2;
	
	
	if(num1 > num2){
		cout << " Numero (" << num1 << ") eh maior que o numero (" << num2 << ")" <<endl;
	}
	else if (num1 < num2){
		cout << " Numero (" << num2 << ") eh menor que o numero (" << num1 << ")" <<endl;
	}
	else{
		cout << " Os numeros sao iguais ";
	}
	
	return 0;
}

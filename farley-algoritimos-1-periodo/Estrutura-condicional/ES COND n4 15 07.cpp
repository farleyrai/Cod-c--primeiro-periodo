/*Escreva um programa em C++ que calcule o Índice de Massa Corporal (IMC)
de uma pessoa, baseado no peso e altura fornecidos pelo usuário, e então classifique de
acordo com a tabela da OMS:
IMC abaixo de 18.5: Abaixo do peso
IMC de 18.5 a 24.9: Peso normal
IMC de 25 a 29.9: Sobrepeso
IMC de 30 ou mais: Obesidade
Fórmula para cálculo do IMC= peso/altura2*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float altura, peso, imc;
	cout<<" Informe sua altura: "<<endl;
	cin>>altura;
	cout<<" Informe o seu peso: "<<endl;
	cin>>peso;
	imc=peso/(altura*altura);
	if( imc>0 && imc<=18.5){
		cout<<" Abaixo do peso. "<< imc<<endl;
	}
	else if( imc>18.5 && imc<=24.9){
		cout<<" Peso normal. "<< imc<<endl;
	}
	else if(imc>25 && imc<=29.9){
		cout<<" Sobrepeso. "<< imc<<endl;
	}
	else if(imc>=30 ){
	cout<<" obesidade. "<< imc<<endl;
    }
    else{
    	cout<<" imc nao valido"<< imc<<endl;
	}
	return 0;
}

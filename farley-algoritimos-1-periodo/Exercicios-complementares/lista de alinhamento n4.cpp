//Considere a seguinte situação: anualmente o salário de um funcionário é ajustado conforme o valor da inflação.
// Para isso, crie um programa que solicite do usuário o salário e também o índice inflacionário e calcule o salário reajustado.
 #include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	float salario, indice ,valor;
	cout<<" Informe o seu salario:"<<endl;
	cin>>salario;
	cout<<"informe o indice inflacionario"<<endl;
	cin>>indice;
	valor=salario+(salario*(indice*0.01));
	cout<<" O salario reajustado sera: "<<valor<<endl;
	return 0;
} 

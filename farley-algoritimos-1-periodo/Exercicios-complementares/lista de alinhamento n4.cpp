//Considere a seguinte situa��o: anualmente o sal�rio de um funcion�rio � ajustado conforme o valor da infla��o.
// Para isso, crie um programa que solicite do usu�rio o sal�rio e tamb�m o �ndice inflacion�rio e calcule o sal�rio reajustado.
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

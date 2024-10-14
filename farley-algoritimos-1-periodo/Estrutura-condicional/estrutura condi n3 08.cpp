/*Crie um programa que faça a leitura de dois valores inteiros. Pergunte ao
usuário um terceiro valor, para este número informado, você deve indicar se ele está ou não
entre os dois primeiros valores lidos. Exemplo: considere que o usuário digitou o valor 5 e 9.
Posteriormente, digitou o valor 7, podemos afirmar que 7 está entre 5 e 9.*/
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int n1, n2, n3;
	cout<<" Digite o primeiro valor: "<<endl;
	cin>>n1;
	cout<<" Digite o segundo valor: "<<endl;
	cin>>n2;
	cout<<" Digite o terceiro valor: "<<endl;
	cin>>n3;
	if (n1<n3 && n3<n2){
		cout<<" Esta entre os dois primeiros valores."<<endl;
		}
	else{
		cout<<" Não esta entre os dois primeiros valores. ";
	}
	return 0;
}

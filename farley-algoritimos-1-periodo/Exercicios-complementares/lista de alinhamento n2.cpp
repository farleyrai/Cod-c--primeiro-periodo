/*Uma livraria est� em oferta com os livros de romance, cada unidade est� com 47% de desconto.
 Crie um algoritmo que dado um valor de livro,
 lido pelo usu�rio indique qual seria o valor final ap�s entrar na oferta.*/ 
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	float valor, valorf;
	cout<<" Digite o valor do livro: "<<endl;
	cin>>valor;
	valorf= valor-(valor*0.47);
	cout<<" O valor final com desconto sera: "<<valorf<<" reais. "<<endl;
	return 0;
}

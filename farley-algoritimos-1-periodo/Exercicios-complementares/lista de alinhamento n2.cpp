/*Uma livraria está em oferta com os livros de romance, cada unidade está com 47% de desconto.
 Crie um algoritmo que dado um valor de livro,
 lido pelo usuário indique qual seria o valor final após entrar na oferta.*/ 
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

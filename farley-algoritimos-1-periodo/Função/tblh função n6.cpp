/*Crie uma fun��o que receba um valor em reais e
 a cota��o atual do d�lar, e retorne
o valor convertido para d�lares.*/
#include<iostream>
using namespace std;
float converter(float valor, float cotacao){
	return valor*cotacao;
}
int main(){
	float valor, cotacao, conv;
	
	cout<<" digite o valor que vc quer converter: "<<endl;
	cin>>valor;
	cout<<" digite o valor da cotacao atual: "<<endl;
	cin>>cotacao;
	conv=converter(valor, cotacao);
	cout<<" o valor convertido sera: "<<conv<<endl;
	
	return 0;
}

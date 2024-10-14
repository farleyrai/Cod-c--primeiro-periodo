/*Crie uma função que receba um valor em reais e
 a cotação atual do dólar, e retorne
o valor convertido para dólares.*/
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

/*Escreva um programa em C++ que classifique um tri�ngulo de acordo com
seus lados:
? Equil�tero: todos os lados s�o iguais.

? Is�sceles: dois lados s�o iguais.
? Escaleno: todos os lados s�o diferentes.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int a,b,c;
	cout<<" Informe os 3 lados do triangulo: "<<endl;
	cin>>a>>b>>c;
	if( a==b && b==c && c==a){
	cout<<" O triangulo e equilatero"<<endl;	
	}
	else if(a==b || b==c || c==a){
		cout<<" o triangulo e is�sceles. "<<endl;
	}
	else if ( a!=b && b!=c && c!=a){
		cout<<" E um triangulo escaleno. "<<endl;
	}
	else{
		cout<<" valor nao reconhecido"<<endl;
	}
	return 0;
}

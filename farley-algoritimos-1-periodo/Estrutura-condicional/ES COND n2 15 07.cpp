/*Escreva um programa em C++ que verifique se um ano fornecido pelo usuário
é bissexto, sabendo que um ano bissexto é divisível por 4, 400, mas nunca por 100.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int ano;
	cout<<"digite o ano: "<<endl;
	cin>>ano;
	if(ano%4==0 && ano%100!=0){
		cout<<"o ano é bissexto"<<endl;
	}
	else if(ano%400==0 && ano%100==0){
		cout<<"o ano é bissexto"<<endl;
	}
	else{
		cout<<"não é bissexto";
	}
	return 0;
}

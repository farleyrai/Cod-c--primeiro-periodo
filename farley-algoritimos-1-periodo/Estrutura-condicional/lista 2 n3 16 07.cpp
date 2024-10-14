/*A Copa do Mundo de 2010 ser� realizada na �frica do Sul. Bolas de futebol s�o
muito f�ceis de transportar, j� que elas saem das f�bricas vazias e s� s�o enchidas
somente pelas lojas ou pelos consumidores finais. Infelizmente o mesmo n�o pode
ser dito das bolas de boliche. Como elas s�o completamente s�lidas, elas s� podem
ser transportadas embaladas uma a uma, em caixas separadas. A SBC - S� Boliche
Cascavel - � uma f�brica de bolas de boliche que trabalha somente atrav�s de
encomendas e envia todas as bolas por SEDEX. Como as bolas t�m tamanhos
diferentes, a SBC tem v�rios tamanhos de caixas diferentes para transport�-las.
Escreva um programa que, dado o di�metro de uma bola e as 3 dimens�es de uma
caixa (altura, largura e profundidade), diz se a bola de boliche cabe dentro da caixa
ou n�o.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float dia, altura,largura,profun;
	cout<<" Informe o diametro da bola"<<endl;
	cin>>dia;
	cout<<" Informe a altura da caixa"<<endl;
	cin>>altura;
	cout<<" Informe a largura da caixa"<<endl;
	cin>>largura;
	cout<<" Informe a profundidade da caixa"<<endl;
	cin>>profun;
	if( dia<=altura && dia<=largura && dia<=profun){
	cout<<" A bola cabe dentro da caixa."<<endl;
    }
    else if(dia<=0 || altura<=0 || largura<=0 || profun<=0){
    	cout<<" Valor invalido"<<endl;
	}
    else {
    	cout<<" A bola n�o cabe dentro da caixa."<<endl;
	}
	return 0;
}

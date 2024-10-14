/*A Copa do Mundo de 2010 será realizada na África do Sul. Bolas de futebol são
muito fáceis de transportar, já que elas saem das fábricas vazias e só são enchidas
somente pelas lojas ou pelos consumidores finais. Infelizmente o mesmo não pode
ser dito das bolas de boliche. Como elas são completamente sólidas, elas só podem
ser transportadas embaladas uma a uma, em caixas separadas. A SBC - Só Boliche
Cascavel - é uma fábrica de bolas de boliche que trabalha somente através de
encomendas e envia todas as bolas por SEDEX. Como as bolas têm tamanhos
diferentes, a SBC tem vários tamanhos de caixas diferentes para transportá-las.
Escreva um programa que, dado o diâmetro de uma bola e as 3 dimensões de uma
caixa (altura, largura e profundidade), diz se a bola de boliche cabe dentro da caixa
ou não.*/
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
    	cout<<" A bola não cabe dentro da caixa."<<endl;
	}
	return 0;
}

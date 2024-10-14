#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
int qtdE=0,qtd1=0,qtd2=0,qtd3=0;
int voto;
cout<<" Digite 1 para afonso, 2 para joao, 3 para pedro"<<endl;
cout<<" Informe a quantidade de eleitores"<<endl;
cin>>qtdE;
for(int i=0; i<qtdE; i++){
	cout<<" Digite o seu voto "<<endl;
	cin>>voto;
	if( voto==1){
		qtd1=qtd1+1;
	}
	else if(voto==2){
		qtd2=qtd2+1;
	}
	else if( voto==3){
		qtd3=qtd3+1;
	}
	else{
		cout<<" Voto invalido. "<<endl;
	}
	
}
cout<<" Eleitor afonso:"<<qtd1<<endl
    <<" Eleitor joao:"<<qtd2<<endl
    <<" Eleitor pedro:"<<qtd3<<endl;
    
    
    if(qtd1>qtd2 && qtd1>qtd3){
    	cout<<" Afonso ganhou a eleição."<<endl;
	}
	else if(qtd2>qtd1 && qtd2>qtd3){
		cout<<" João ganhou a eleição. "<<endl;
	}
	else if(qtd3>qtd1 && qtd3>qtd2){
		cout<<" Pedro ganhou a eleição. "<<endl;
	}
	else if( qtd1==qtd2 || qtd1==qtd3){
		cout<<" Empate. "<<endl;
	}
return 0;
}

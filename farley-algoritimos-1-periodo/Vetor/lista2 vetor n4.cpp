#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	string lista[10],nome;
	int aprovado= 10;
	cout<<" digite os nomes dos candidatos aprovados"<<endl;
	for( int i=0; i<10;i++){
		cout<<" candidato: "<< i+1<<endl;
	cin>>lista[i];
	}
	cout<<" Insira um nome e veja se esta na lista de aprovados. "<<endl;
	cin>>nome;
	for( int i=0; i<10;i++){
		if(lista[i]==nome){
		cout<<" Parabens, voce foi aprovado!"<<endl;
		aprovado--;
		}
}
	if ( aprovado == 10 ){
			cout<<" Nome nao foi encontrado na lista."<<endl;
		}
	return 0;
}


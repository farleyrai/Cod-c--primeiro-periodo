#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	int respostas,cont=0;
	string perguntas[5]={"Voc� tem febre?","Est� com tosse seca?","Sente dificuldade para respirar?","Perdeu o olfato ou paladar?","Est� com dores no corpo?"};
    for(int i=0;i<5; i++){
    	cout<<perguntas[i]<<endl;
		cout<<"[1] para sim"<<endl;
		cout<<"[0] para nao"<<endl;
		cin>>respostas;
		if( respostas==1){
			cont++;
		}		
}
	if( cont>=0 && cont<=1){
		cout<<" sintomas leves, monitorar."<<endl;
	}
	else if(cont>=2 && cont<=3){
		cout<<"Sintomas moderados, considerar um teste de COVID-19."<<endl;
	}
	else if ( cont>=4 && cont<=5){
		cout<<"Sintomas graves, buscar orienta��o m�dica imediatamente."<<endl;
	}
	return 0;
}

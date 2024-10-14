/*Elaborar um algoritmo que, dada a idade de um nadador, 
classificá-lo nas categorias: infantil A (5 - 7 anos),infantil B (8 -10 anos),
 juvenil A (11 - 13 anos), juvenil B (14 -17 anos) e adulto (maiores que 18 anos). */
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int idade;
	cout<<" Informe a sua idade: "<<endl;
	cin>>idade;
	if( idade>=5 && idade<=7){
		cout<<" Infantil A. "<<endl;
	}
	else if(idade>=8 && idade<=10){
	    cout<<" Infantil B. "<<endl;
	}
	else if (idade>=11 && idade<=13){
			cout<<" Juvenil A. "<<endl;
	}
	else if( idade>=14 && idade<=13){
		cout<<" Juvenil B."<<endl;
	}
	else if(idade>18){
		cout<<" Adulto."<<endl;
	}
	else if (idade >0 && idade<=4){
		cout<<" Idade nao permitida."<<endl;
	}
	else{
		cout<<" Idade inexistente. "<<endl;
	}
	return 0;
}

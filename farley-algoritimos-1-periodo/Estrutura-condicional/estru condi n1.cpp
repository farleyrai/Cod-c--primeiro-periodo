//Voc� precisa desenvolver um m�dulo do sistema banc�rio para validar a
//possibilidade de uma pessoa fazer ou n�o um pix. Para isso, voc� deve saber o saldo do
//cliente e tamb�m o valor de pix a ser enviado. Seu sistema deve emitir um alerta sobre a
//aprova��o ou n�o do pix.
#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	float saldo,pix ;
	cout<<"qual o saldo "<<endl;
	cin>>saldo;
	cout<<"qual o valor do pix"<<endl;
	cin>>pix;
	
	if (saldo>=pix){
		cout<<"if entrou aqui"<<endl;
		cout<<"transa�ao feita com sucesso"<<endl;
			
	}
	else{
		cout<<"infelismente nao foi possivel"<<endl;
		
	}
	return 0;
}

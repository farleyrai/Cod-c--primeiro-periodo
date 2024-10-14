//Você precisa desenvolver um módulo do sistema bancário para validar a
//possibilidade de uma pessoa fazer ou não um pix. Para isso, você deve saber o saldo do
//cliente e também o valor de pix a ser enviado. Seu sistema deve emitir um alerta sobre a
//aprovação ou não do pix.
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
		cout<<"transaçao feita com sucesso"<<endl;
			
	}
	else{
		cout<<"infelismente nao foi possivel"<<endl;
		
	}
	return 0;
}

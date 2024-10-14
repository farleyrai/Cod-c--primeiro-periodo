#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	int op;
	float saldo,valor,depo,saque;
	cout<<" Digite o seu saldo: "<<endl;
	cin>>saldo;
	cout<<" Informe qual operação deseja realizar: "<<endl
	    <<" [1]Consultar saldo."<<endl
	    <<" [2]Depositar dinheiro."<<endl
	    <<" [3]Sacar dinheiro."<<endl;
	cin>>op;
	switch( op){
		case 1:
			cout<<" seu saldo é "<<saldo<<" Reais."<<endl;
			break;
		case 2:
		cout<<" quanto deseja depositar?"<<endl;
		cin>>depo;
		valor=depo+saldo;
		cout<<" seu novo saldo e: "<<valor<<" Reais."<<endl;
		break;
		case 3:
		cout<<" quanto deseja sacar?"<<endl;
		cin>>saque;
		
		if(saldo>=saque){
		valor=saldo-saque;
		cout<<" saque autorizado, seu novo saldo sera:"<<valor<<" Reais."<<endl;
	}
	else{
		cout<<" Saldo insuficiente."<<endl;
	}
	break;
	default:
		cout<<" Opcao inexistente."<<endl;
		
	}
	return 0;
}

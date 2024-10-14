#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
int cod, lanches,quant;
float valor;
cout<<" Digite um codigo: "<<endl
    <<"[100] cachorro quente."<<endl
    <<"[101] bauru simples."<<endl
    <<"[102] bauru com ovo."<<endl
    <<"[103] hamburguer."<<endl
    <<"[104] cheeseburguer"<<endl
    <<"[105] refrigerante"<<endl;
cin>>cod;
cout<<" Digite a quantidade de lanches: "<<endl;
cin>>quant;
switch(cod){
	case 100:
	valor=quant*1.70;
	    cout<<" O valor a pagar sera:"<< valor<<endl;
	break;
	
	case 101:
	valor=quant*2.30;
		cout<<" O valor a pagar sera:"<< valor<<endl;
	break;
	case 102:
	valor=quant*2.60;
	    cout<<" O valor a pagar sera:"<< valor<<endl;
	break;
	case 103:
	valor=quant*2.40;
		cout<<" O valor a pagar sera:"<< valor<<endl;
	break;
	case 104:
	valor=quant*2.50;
		cout<<" O valor a pagar sera:"<< valor<<endl;
	break;
	case 105:
	valor=quant*1;
		cout<<" O valor a pagar sera: "<< valor<<endl;
	break;
	default:
		cout<<" codigo invalido."<<endl;
}

return 0;
}

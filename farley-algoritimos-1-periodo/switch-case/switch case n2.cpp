/*Crie um programa em C++ que funcione como um conversor de unidades
simples. O programa deve exibir um menu com diferentes op��es de convers�o: metros
para cent�metros, quilogramas para gramas, horas para minutos usando switch case. Ap�s
a escolha da convers�o, o programa deve solicitar ao usu�rio o valor a ser convertido e
exibir o resultado.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
    int num1;
    float num, valor;
    cout<<" Digite 1 se for de metros para centimetros. "<<endl
        <<" Digite 2 se for de quilo para gramas. "<<endl
        <<" Digite 3 se for de horas para minutos. "<<endl;
    cin>>num1;
	cout<<" Digite o valor"<<endl;
	cin>>num;
	switch( num1){
		case 1:
			valor=num*100;
			cout<<" Resultado: "<<valor<<" centimetros. "<<endl;
			break;
		case 2:
		    valor=num*1000;
			cout<<" Resultado: "<<valor<<" Gramas. "<<endl;
			break;
		case 3:
		     valor=num*60;
			 cout<<" Resultado: "<<valor<<" Minutos. "<<endl;
			 break;
	default:
	cout<<" Opcao invalida."<<endl;
	break;		 			
	}    
	return 0;
}

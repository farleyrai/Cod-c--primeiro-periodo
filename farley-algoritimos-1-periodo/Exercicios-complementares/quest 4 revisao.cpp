//Uma locadora de carros aluga seus ve�culos cobrando uma taxa de R$
//25,00 reais a di�ria mais R$ 0,20 por quil�metro rodado. Escreva um programa C++ que l�
//a quantidade de dias que o ve�culo ficou alugado e a quantidade de quil�metros rodados e
//mostre o valor a ser pago na devolu��o.
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main (){
	float valor,km,dias;
	cout<<"Quantidade de dias alugado: "<<endl;
	cin>>dias;
	cout<<"Quantidade de km rodados: "<<endl;
	cin>>km;
	valor=(dias*25)+(km*0.20);
	cout<<"o valor a ser pago sera: "<< "S$ "<< valor<<" reais"<<endl;
	return 0;
}

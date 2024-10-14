//Uma locadora de carros aluga seus veículos cobrando uma taxa de R$
//25,00 reais a diária mais R$ 0,20 por quilômetro rodado. Escreva um programa C++ que lê
//a quantidade de dias que o veículo ficou alugado e a quantidade de quilômetros rodados e
//mostre o valor a ser pago na devolução.
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

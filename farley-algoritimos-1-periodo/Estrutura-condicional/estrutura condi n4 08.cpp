/*Uma frota de carregamento de produtos instruiu aos seus funcionários
medidas protetivas para precaução de acidentes nas rodovias. Uma das instruções é sobre
o peso transportado. O peso permitido para os seguintes grupos de veículos são:
Veículo nível 1 : entre 100 kg e 200 kg
Veículo nível 2 ou 3: entre 201 e 300kg
Neste exercício , de posse do tipo de veículo (que pode ser nível 1 ou 2) e do peso transportado
 valide se está dentro do permitido ou não.*/
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese" );
	float veiculo, peso;
	cout<<"digite 1 para o veiculo de nivel 1, e digite 2 para o veiculo de nivel 2"<<endl;
	cin>>veiculo;
	cout<<" Informe o peso que esta sendo transportado: "<<endl;
	cin>>peso;
	if(veiculo==1){
		if(peso>=100 && peso<=200){
			cout<<" O peso esta permitido para o nivel 1. "<<endl;
		}
		else{
			cout<<" Nao esta permitido para o nivel 1. "<<endl;
		}
	}
	else{
		if(peso>=201 && peso<=300){
			cout<<" O peso esta permitido para o nivel 2. "<<endl;
		}
		else{
			cout<<" O peso nao esta permitido para o nivel 2. "<<endl;
		}
	}
	return 0;
}


/*Crie uma struct chamada Carro que contenha os campos: modelo, ano e preço.
Peça ao usuário para inserir os dados de um carro e, em seguida, exiba uma
mensagem indicando se o carro é considerado novo (menos de 5 anos) ou usado (5
anos a 8 anos), antigo ( de 9 anos para cima).*/
#include<iostream>
#include<string>
using namespace std;
struct Carro{
	string modelo;
	int ano;
	float preco;
};
int main(){
	int anoA=2024, total=0;
	Carro a1;
	cout<<" Informe o modelo do carro."<<endl;
	getline(cin,a1.modelo);
	cout<<"Informe o ano de fabricacao."<<endl;
	cin>>a1.ano;
	cout<<" Informe o preco do carro."<<endl;
	cin>>a1.preco;
	total=anoA-a1.ano;
	
	if( total<=5){
		cout<<" Seu carro e considerado novo."<<endl;
	}
	else if(total>5 && total<=8){
		cout<<" Seu carro e usado. "<<endl;
	}
	else if( total>=9 && total<50){
		cout<<" Seu carro e antigo."<<endl;
	}
	else{
		cout<<" Seu carro e muito velho."<<endl;
	}
	cout<<" o seu carro tem o modelo "<<a1.modelo<<" o ano de fabricacao e "<<a1.ano<<" e o preco do carro e "<<a1.preco<<endl<<" reais";
return 0;	
}



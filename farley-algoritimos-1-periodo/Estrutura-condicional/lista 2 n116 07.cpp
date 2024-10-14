/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta
 e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de pagamento
  escolhida e efetuar o cálculo adequado. 
Código Condição de pagamento: 
1 À vista em dinheiro ou cheque, recebe 10% de desconto 
2 À vista no cartão de crédito, recebe 15% de desconto 
3 Em duas vezes, preço normal de etiqueta sem juros 
4 Em três vezes, preço normal de etiqueta mais juros de 10% */
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float preco, paga, pf;
	cout<<" Informe o preço do produto: "<<endl;
	cin>>preco;
	cout<<" Informe o metodo de pagamento:"<<endl
	    << " Didite 1 se for dinheiro a vista ou cheque"<<endl
		<< " Digite 2 se for a vista no cartao de credito"<<endl
		<< " Digite 3 se for parcelar em duas vezes"<<endl
		<< " Digite 4 se for parcelar em tres vezes "<<endl;
	cin>>paga;
	if(paga==1){
		pf=preco-(preco*0.10);
		cout<<" O pagamento final sera: "<<pf<<endl;
	}
	else if(paga==2){
		pf=preco-(preco*0.15);
		cout<<" O pagamento final sera: "<<pf<<endl;
	}
	else if(paga==3){
		cout<<" O pagamento final sera: "<<preco<<endl;
	}
	else if(paga==4){
		pf=preco+(preco*0.10);
		cout<<" O pagamento final sera: "<<pf<<endl;
	}
	else{
		cout<<" valor invalido"<<endl;
	}
	return 0;
}

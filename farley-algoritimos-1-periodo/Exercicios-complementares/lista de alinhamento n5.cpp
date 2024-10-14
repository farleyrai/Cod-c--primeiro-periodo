/*Simule um sistema de troco de supermercado que tenha como tenha como entrada dois valores, 
sendo o valor da compra e o valor do dinheiro que o cliente entregou, você deve simular o valor do troco ( isso se ele existir ). 
Exemplo: valor da compra: 10.50 e valor que o cliente entregou: 20 o troco será dado por 20 - 10.50.*/
 #include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	float vdinheiro, vcompra, valor;
	cout<<" Digite o valor da compra: "<<endl;
	cin>>vcompra;
	cout<<" Digite o valor que o cliente entregou: "<<endl;
	cin>>vdinheiro;
	if (vcompra<=vdinheiro){
		cout<<" Pagamento possivel. "<<endl;
		valor= vdinheiro-vcompra;
		cout<<" O seu troco sera: "<<valor<<" reais."<<endl;
	}
	else{
		cout<<" Dinheiro insuficiente.";
	}
	return 0;
} 

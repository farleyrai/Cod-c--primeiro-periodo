#include<iostream>
#define TAXA 0.03
using namespace std;
int main(){
	float preco,quant, valor, valorF;
	cout<<"qual o preco "<<endl;
	cin>>preco;
	cout<<"qual a quantidade "<<endl;
	cin>>quant;
	valor=preco*quant;
	valorF=valor+(valor*TAXA);
	cout<<"o resultado sera "<<valorF<<endl;
	return 0;
}

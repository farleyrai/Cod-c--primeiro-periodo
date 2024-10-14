#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
float peso, quant1, quant2, racao, peso1;
cout<<" Digite o peso do saco de raçao: "<<endl;
cin>>peso;
cout<<" Digite a quantidade fornecida para o primeiro gato "<<endl;
cin>>quant1;
cout<<" Digite a quantidade fornecida para o segundo gato "<<endl;
cin>>quant2;
peso1=peso*1000;
racao= (quant1+quant2)*5;

if(peso1>=racao){
	peso=peso1-((quant1+quant2)*5);
	cout<<" Restara: "<<peso<<" gramas apos 5 dias"<<endl;
	}
else{
	cout<<" Quantidade de racao insuficiente para 5 dias. "<<endl;
}
return 0;
}

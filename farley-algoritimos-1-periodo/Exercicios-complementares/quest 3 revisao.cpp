//Para vários tributos, a base de cálculo é o salário mínimo. Fazer um
//programa que leia o valor do salário mínimo e o valor do salário de uma pessoa. Calcular e
//imprimir quantos salários mínimos ela ganha.
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float salmini,salpess,total;
	cout<<"O valor do salario minimo: "<<endl;
	cin>>salmini;
	cout<<"O valor do salario de uma pessoa: "<<endl;
	cin>>salpess;
	total=salpess/salmini;
	cout<<"Voce recebe "<<total<<" salarios minimos"<<endl;
	return 0;
}

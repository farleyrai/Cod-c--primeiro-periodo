//Para v�rios tributos, a base de c�lculo � o sal�rio m�nimo. Fazer um
//programa que leia o valor do sal�rio m�nimo e o valor do sal�rio de uma pessoa. Calcular e
//imprimir quantos sal�rios m�nimos ela ganha.
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

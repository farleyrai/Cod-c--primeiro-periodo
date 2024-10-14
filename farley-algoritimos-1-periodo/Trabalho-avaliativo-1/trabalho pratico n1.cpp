#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	float salarioB, total;
	cout<<" Informe o seu salario: "<<endl;
	cin>>salarioB;
	total=(salarioB+(salarioB*0.05)) - salarioB*0.07;
	cout<<" o total a receber sera: "<<total<<endl;
	return 0;
}

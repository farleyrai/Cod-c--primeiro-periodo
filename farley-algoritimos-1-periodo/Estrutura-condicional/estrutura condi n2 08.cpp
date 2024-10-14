/*Considere que em um processo seletivo a aprovação é dada conforme dois
critérios:
? A idade da pessoa deve estar entre 18 e 30 anos, inclusive.
? A pessoa deve ter uma pontuação mínima de 70 no teste.
Solicite ao usuário a sua idade e respectiva pontuação no processo seletivo e verifique se
ele está aprovado ou não, indique os critérios alcançados ou não no concurso. Ex:.
aprovação por idade e nota Ex:. reprovação por idade.*/
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	float idade, pontuacao;
	cout<<" Informe a sua idade: "<<endl;
	cin>>idade;
	cout<<" Informe a sua pontuação: "<<endl;
	cin>>pontuacao;
	if(idade>=18 && idade<=30){
		cout<<" Aprovado por idade."<<endl;
		if(pontuacao>=70){
			cout<<" Aprovado por  nota."<<endl;
			}
		else {
			cout<<" Reprovado por nota."<<endl;
		}
	}
	else{
		cout<<"Reprovado por idade."<<endl;
    }
	return 0;
}

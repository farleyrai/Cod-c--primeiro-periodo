/*Considere que em um processo seletivo a aprova��o � dada conforme dois
crit�rios:
? A idade da pessoa deve estar entre 18 e 30 anos, inclusive.
? A pessoa deve ter uma pontua��o m�nima de 70 no teste.
Solicite ao usu�rio a sua idade e respectiva pontua��o no processo seletivo e verifique se
ele est� aprovado ou n�o, indique os crit�rios alcan�ados ou n�o no concurso. Ex:.
aprova��o por idade e nota Ex:. reprova��o por idade.*/
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	float idade, pontuacao;
	cout<<" Informe a sua idade: "<<endl;
	cin>>idade;
	cout<<" Informe a sua pontua��o: "<<endl;
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

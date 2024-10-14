#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	char vetor[5], vetor1[5];
	int cont=0, cont1=0, acertos=0 ,resposta;
	cout<<" Insira a resposta do aluno de 'a' a 'e':"<<endl;
	for(int i=0; i<5; i++){
		cout<<" Questão: "<< i+1<<endl;
		cin>>vetor[i];
		cont++;
	}
	cout<<" insira o gabarito da prova:"<<endl;
	for( int i=0; i<5; i++){
		cout<<" questao: "<<i+1<<endl;
		cin>>vetor1[i];
		cont1++;
	}
	for( int i=0; i<5; i++){
			if( vetor[i]==vetor1[i])
			acertos++;	
	}
	cout<<" o numero total de acertos sera: "<<acertos<<endl;
	return 0;
}

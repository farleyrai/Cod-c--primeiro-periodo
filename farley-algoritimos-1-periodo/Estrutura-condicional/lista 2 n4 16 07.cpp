/*Rosy é uma talentosa professora do Ensino Médio que já ganhou muitos prêmios
pela qualidade de sua aula. Seu reconhecimento foi tamanho que foi convidada a
dar aulas em uma escola da Inglaterra. Mesmo falando bem inglês, Rosy ficou um
pouco apreensiva com a responsabilidade, mas resolveu aceitar a proposta e
encará-la como um bom desafio. Tudo ocorreu bem para Rosy até o dia da prova.
Acostumada a dar notas de 0 (zero) a 100 (cem), ela fez o mesmo na primeira prova
dos alunos da Inglaterra. No entanto, os alunos acharam estranho, pois na Inglaterra
o sistema de notas é diferente: as notas devem ser dadas como conceitos de A a E.
O conceito A é o mais alto, enquanto o conceito E é o mais baixo. Conversando com
outros professores, ela recebeu a sugestão de utilizar a seguinte tabela,
relacionando as notas numéricas com as notas de conceitos:*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int nota;
	cout<<" Informe a nota do aluno: "<<endl;
	cin>>nota;
	if(nota>=86 && nota<=100){
		cout<<" Conceito A. "<<endl;
	}
	else if(nota>=61 && nota<=85){
		cout<<" Conceito B. "<<endl;
	}	
	else if(nota>=36 && nota<=60){
		cout<<" Conceito C. "<<endl;
    }
    else if(nota>=1 && nota<=35){
    	cout<<" Conceito D. "<<endl;
	}
	else if( nota==0){
		cout<<" Conceito E. "<<endl;
	}
	else {
		cout<<" Nota invalida. "<<endl;
	}
	return 0;
}

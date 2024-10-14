#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL," portuguese");
	int opcao, total,nota1,nota2, nota3;
	float peso1,peso2,peso3;
	cout<<" Escolha uma opcao: "<<endl;
	cout<<"[1] Média aritmética"<<endl
        <<"[2] Média ponderada"<<endl
        <<"[3] Sair do programa"<<endl;
    cin>>opcao;
    if(opcao==1){
    	cout<<" digite duas notas: "<<endl;
    	cin>>nota1>>nota2;
    	total=(nota1+nota2)/2;
    	cout<<" A media aritimetica sera: "<<total<<endl;
	}
	else if(opcao==2){
		cout<<" digite a nota 1: "<<endl;
		cin>>nota1;
		cout<<" digite o peso da nota 1: "<<endl;
		cin>>peso1;
		cout<<" digite a nota 2: "<<endl;
		cin>>nota2;
		cout<<" digite o peso da nota 2: "<<endl;
		cin>>peso2;
		cout<<" digite a nota 3: "<<endl;
		cin>>nota3;
		cout<<" digite o peso da nota 3: "<<endl;
		cin>>peso3;
		total=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
        cout<<"A media ponderada e: "<<total<<endl;
	}
	else if( opcao==3){
		cout<<" Sair do progama"<<endl;
	}
	else{
		cout<<" Opcao invalida"<<endl;
	}
	
	return 0;
}

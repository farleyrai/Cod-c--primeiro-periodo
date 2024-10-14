#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int nume, idade,contAltura=0,cont=0, cont1=0, contIdade=0 ,total;
	float peso, porcentagem, altura, medidade=0;
	cout<<"digite o numero de pessoas"<<endl;
	cin>>nume;
	for( int i=0;i<nume; i++){
		cout<<" digite a idade: "<<i+1<<endl;
		cin>>idade;
		total=total+idade;
		cont++;
		cout<<" digite a altura: "<<i+1<<endl;
		cin>>altura;
		cout<<" digite o peso: "<<i+1<<endl;
		cin>>peso;
		
		if(peso>=90 && altura<=1.50){
		cont1++;
		
	}
	if( idade>=10 && idade<=30){
		contIdade++;
	}
	if( altura>1.90){
		contAltura++;
	}	
	medidade=total/nume;
	porcentagem= 0.0;
	if( contAltura>0){
	porcentagem=( contIdade/contAltura)*100;	
	}
		
	}
	
	cout<<" A media sera: "<< medidade<<endl;
	cout<<" a quantidade de pessoas com peso maior que 90kg e altura menor que 1m50cm sera "<< cont1 <<" pessoas"<<endl;
	cout<<" a porcentagem de pessoas com idade entre 10 e 30 anos, com a quantidade de pessoas que medem mais que 1m90cm sera: "<< porcentagem << "%"<<endl;
	return 0;
}

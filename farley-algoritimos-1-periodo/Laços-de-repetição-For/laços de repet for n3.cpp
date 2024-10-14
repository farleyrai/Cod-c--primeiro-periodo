#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL," Portuguese");
	int idade,total=0, cont=0 ,contaP=0 ;
	float peso, altura,media, soma=0, mediA, somA ,porc;
    for(int i=0;i<5;i++){
	    for(int j=0;j<11;j++){
	    cout<<" digite a idade"<<endl;
	    cin>>idade;
	    cout<<"peso"<<endl;
	    cin>>peso;
	    cout<<" altura"<<endl;
	    cin>>altura;
	    total++;
	    soma=soma+idade;
	    somA=somA+altura;
	    if( idade<18){
		     cont++;
	   }
	   if(peso>80){
	   	contaP++;
	   }	
	}
}
mediA=somA/total;
media=soma/total;
porc=(contaP/total)*100;
	return 0;
}

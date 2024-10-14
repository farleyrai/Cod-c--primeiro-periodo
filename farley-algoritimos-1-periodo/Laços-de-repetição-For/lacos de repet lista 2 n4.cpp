#include<iostream>
#include<locale.h>
using namespace std;
int main(){
setlocale(LC_ALL,"portuguese");
int idade, nAprovado=0,nReprovado=0,meIdade=0;
float nota, meReprovado=0,meAprovado=0,notaTot=0,total=0,quantAluno=0;

for(int i=0; i<2; i++){
    cout<<"Turma "<<i+1<<endl;

    for(int j=0; j<2; j++){

        cout<<"Digite a idade: "<<endl;
        cin>>idade;

        cout<<"Digite a nota: "<<endl;
        cin>>nota;

        notaTot = notaTot+nota;
        quantAluno=quantAluno+1;

        if(nota>=60){
            nAprovado = nAprovado+1;
        }
        else{
            nReprovado= nReprovado+1;
        }

        if(idade>0 && idade<18){
            meIdade=meIdade+1;
        }
    }
}

meAprovado=(nAprovado/quantAluno)*100;
meReprovado=(nReprovado/quantAluno)*100;
total=notaTot/15.5;

cout<<"São "<<nAprovado<<" Aprovados"<<endl;
cout<<"São "<<nReprovado<<" Reprovados"<<endl;
cout<<meIdade<<" Menor de idade reprovado"<<endl;
cout<<"media aprovado: "<<meAprovado<<" % "<<endl;
cout<<"Media reprovado: "<<meReprovado<<" % "<<endl;
cout<<"percentual de nota: "<<total<<" % "<<endl;
	
	
	return 0;	
}

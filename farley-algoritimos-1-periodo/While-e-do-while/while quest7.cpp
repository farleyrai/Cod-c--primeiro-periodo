#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	int alunos, num=0;
	float peso, soma, media;
	cout<<" Digite a quantidade de alunos: "<<endl;
	cin>>alunos;
	 while(alunos>num){
	 	 cout<<" digite o peso dos alunos: "<<endl;
	 	 cin>>peso;
	 	 soma=soma+peso;
	 	 num++;
	 }
	media=soma/alunos;
	cout<<" A media do peso dos alunos e de: "<<media<<" kg";
	return 0;
}

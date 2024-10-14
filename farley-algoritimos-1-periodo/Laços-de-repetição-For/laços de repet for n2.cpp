#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL," Portuguese");
int qtdA, maior=-1, menor=400;
float media, soma=0;
for(int i=0; i<5; i++){
	cout<<"digite a quantidade"<<endl;
	cin>>qtdA;
	soma=soma+qtdA;
	if(qtdA>maior){
		maior=qtdA;
	}
	if(qtdA<menor){
		menor=qtdA;
	}
}
 media=soma/5;
 cout<<"media"<<media<<endl
     <<"menor"<<menor<<endl 
     <<"maior"<<maior<<endl;
	return 0;
}

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL," Portuguese");
	int nota=0;
	int valor;
	cout<<" digite uma nota entre 0 e 10 "<<endl;
	cin>>nota;
	
	if (nota<0 || nota>10){
		cout<<" nota invalida, digite novamente. "<<endl;
	}
	else{
		cout<<" Nota valida."<<endl;
	}
	return 0;
}

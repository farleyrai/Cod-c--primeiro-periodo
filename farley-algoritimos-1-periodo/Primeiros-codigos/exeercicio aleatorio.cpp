#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int idade;
	cout<<"digite sua idade: "<<endl;
	cin>>idade;
	if(idade>=17 && idade<=32){
		cout<<" voce recebera o beneficio :) "<<endl;
	}
	else {
		cout<<" não vai receber :( "<<endl;
	}
	
	
	
	
	
return 0;
	}

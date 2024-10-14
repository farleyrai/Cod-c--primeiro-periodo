#include<iostream>
#include<string>
using namespace std;
void msg(string nome){
	cout<<" Seja bem vindo "<<nome<<endl;	
}
int main(){
	string nome;
	cout<<" Digite o seu nome "<<endl;
	getline(cin,nome);
	msg(nome);
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
struct livro{
	string titulo;
	string autor;
	int ano;
};
struct biblioteca{
	livro l;
	string nome;
	string localizacao;
	string tipo;
};
int main(){
	biblioteca b1;
	cout<<"qual o nome da biblioteca"<<endl;
	getline(cin,b1.nome);
	cout<<" qual a localizacao"<<endl;
	getline(cin,b1.localizacao);
	cout<<" qual o titulo do livro"<<endl;
	getline(cin,b1.l.titulo);
	cout<<"qual o autor do livro"<<endl;
	getline(cin,b1.l.autor);
	cout<<" informe o ano"<<endl;
	cin>>b1.l.ano;
	cout<<" a biblioteca "<< b1.nome <<" na localizacao "<< b1.localizacao<<" com o titulo "<< b1.l.titulo<<" e o autor "<< b1.l.autor<<" e no ano "<< b1.l.ano<<endl;
	
	
	
	
	
	return 0;
}

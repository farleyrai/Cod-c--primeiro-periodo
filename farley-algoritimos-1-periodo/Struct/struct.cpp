#include<iostream>
#include<string>
using namespace std;
struct Item{
	string nome;
	int quantidade;
	float preco;
};
int main(){
	float total;
	
	Item a1;
	cout<<" Digite o nome do cliente: "<<endl;
	getline(cin,a1.nome);
	cout<<" Digite a quantidade de itens: "<<endl;
	cin>>a1.quantidade;
	cout<<" Digite o preco do item: "<<endl;
	cin>>a1.preco;
	cout<<" O cliente "<<a1.nome<<" comprou "<<a1.quantidade<<" de itens, e o preco de cada item e "<<a1.preco<<" Reais."<<endl;
	
	total=a1.quantidade*a1.preco;
	cout<<" O valor total do pedido sera: "<<total<<endl;
	
	return 0;
}

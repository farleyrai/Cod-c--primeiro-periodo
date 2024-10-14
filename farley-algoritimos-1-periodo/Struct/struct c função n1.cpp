#include<iostream>
#include<string>
using namespace std;
struct medico{
	string nome;
	int crm;
	string espe;
void informacao( string nomeU,int crmU,string espeU){
	nome=nomeU;
	crm=crmU;
	espe=espeU;
}
void mostra(){
cout<<" o medico "<<nome<<" do crm "<<crm<<" e asua especialidade e "<<espe<<endl;	
}
};
int main(){
	medico p1;
	p1.informacao(" farley", 13999, "fonodiologo");
	p1.mostra();
	
	return 0;
}

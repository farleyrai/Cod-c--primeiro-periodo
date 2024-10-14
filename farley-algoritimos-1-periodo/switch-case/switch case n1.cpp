#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	int codigo;
	cout<<" Digite um codigo: "<<endl;
	cin>>codigo;
	switch(codigo){
		case 1:
			cout<<" Alimento não perecivel. "<<endl;
			break;
		case 2:
		    cout<<" Alimento perecivel. "<<endl;
			break;
		case 3:
			cout<<" Vestuario."<<endl;
			break;
		case 4:
			cout<<" Limpeza. "<<endl;
			break;
			
		default:
		    cout<<" Codigo inexistente."<<endl;		
	}
	return 0;
}

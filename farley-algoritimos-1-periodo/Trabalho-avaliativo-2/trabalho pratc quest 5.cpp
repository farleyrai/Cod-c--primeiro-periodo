#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int nume, nume1, nume2, total;
	cout<<"Digite o numero que vc quer montar a tabuada:"<<endl;
	cin>>nume;
	cout<<" A tabuada deve começar com: "<<endl;
	cin>>nume1;
	cout<<" A tabuada dev terminar com: "<<endl;
	cin>>nume2;
	while( nume2<nume1){
		cout<<"o numero final deve ser maior que o numero de inicio, digite otro numero!"<<endl;
		cin>>nume2;
	}
	for( int i=nume1; i<=nume2; i++){
		cout<<nume<<" x "<< i << " = "<<nume*i<<endl;
	}
	return 0;
}

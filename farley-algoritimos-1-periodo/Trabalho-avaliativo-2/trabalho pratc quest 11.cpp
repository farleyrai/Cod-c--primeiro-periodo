#include<iostream>
#include<locale.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int nume, tenta, cont=0;
	cout<<" Digite  o numero magico entre 0 e 500. "<<endl;
	cin>>nume;
	for( int i=0;i<500; i++){
		cout<<"Digite o seu palpite: "<<endl;
		cin>>tenta;
		cont++;
	if( tenta>nume){
		cout<<" Tentativa maior que o numero magico, tente novamente"<<endl;
	}
	else if(tenta<nume){
		cout<<" Tentativa menor que o numero magico, tente novamente"<<endl;
	}
	else{
		cout<<" Parabens, vc acertou!"<<endl;
		break;
	}
}
cout<<" o numero de tentativas foi:"<<cont<<endl;


if (cont >= 1 && cont <= 3) {
        cout << "Você é muito sortudo!" << endl;
    }
	 else if (cont >= 4 && cont <= 6) {
        cout << "Você é sortudo!" << endl;
    } 
	else if (cont >= 7 && cont <= 10) {
        cout << "Você é normal!" << endl;
    } 
	else {
        cout << "Tente novamente!" << endl;
    }

	return 0;
}

//Crie um programa que dado um valor informado pelo usu�rio, valide se este
//valor � divis�vel por 2 e 3 ao mesmo tempo.
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int nume;
	cout<<"digite um numero: "<<endl;
	cin>>nume;
	if (nume%2==0 && nume%3==0){
		cout<<" � divisivel por 2 e 3 ao mesmo tempo."<<endl;
	}
	else {
		cout<<" n�o �."<<endl;
	}
	return 0;
}

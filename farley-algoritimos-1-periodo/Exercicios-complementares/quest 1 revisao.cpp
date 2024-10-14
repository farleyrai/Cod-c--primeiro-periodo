//Programe um algoritmo que recebe dois números, onde o primeiro deve ser
//menor que o segundo. Em seguida, ele calcula a porcentagem que o primeiro representa do
//segundo. Por exemplo, se digitou 12 e 21, isso quer dizer que 12 representa 57,14% de 21.
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	float n1,n2,div;
	cout<<"Digite um numero: "<<endl;
	cin>>n1;
	cout<<"Digite um numero maior que o anterior: "<<endl;
	cin>>n2;
	div=(n1/n2)*100;
	cout<<"Isso quer dizer que: "<<n1 <<" é "<<div<<"% "<< " de "<< n2<<".";
	return 0;
}

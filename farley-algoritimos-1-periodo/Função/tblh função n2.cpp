/*Fa�a um programa com uma fun��o que receba tr�s 
n�meros como argumentos e
retorne a m�dia aritm�tica desses n�meros.*/
#include<iostream>
using namespace std;
float media(float n1, float n2, float n3){
	return (n1+n2+n3)/3;
}
int main(){
	float n1,n2,n3,valor;
	cout<<" digite os tres numeros "<<endl;
	cin>>n1>>n2>>n3;
	
	valor= media(n1,n2,n3);
	cout<<" a media aritimetica e "<<valor<<endl;

	
	return 0;
}

	



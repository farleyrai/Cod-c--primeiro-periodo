/* faca uma funçao que recebe , por parametro , 
um valor inteiro e positivo e retorna o numero
 divisores desse valor.*/ 
#include<iostream>
using namespace std;
int div( int nume){
	int cont=0;
	for(int i=1;i<=nume; i++){
		if(nume%i==0){
		cont++;
		}
	}
		return cont;
}	
int main(){
	int nume, total;
	cout<<" digite um numero inteiro e positivo"<<endl;
	cin>>nume;
	total=div(nume);
	cout<<" o numero de divisores sera: "<<total<<endl;
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int idade, cont=0, total=0;
	cout<<" digite a idade "<<endl;
	cin>>idade;
	
	while(idade>0){
		if(idade<18){
			cont++;
		}
		cin>>idade;
		total++;
		}
	
	cout<<" menores de idade: "<<cont<<endl;
	cout<<" total de inseridos: "<<total<<endl;
	return 0;
}

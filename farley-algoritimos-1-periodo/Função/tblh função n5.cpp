/*Fa�a uma fun��o que receba a idade de uma pessoa 
e retorne a categoria:"Crian�a" (0-12), "Adolescente" 
(13-17), "Adulto" (18-64) ou "Idoso" (65+).*/
#include<iostream>
#include<string>
using namespace std;
string categoria(int idade){
	 if(idade>=0 && idade<=12){
	 	return "crianca";
	 }
	 else if ( idade>=13 && idade<=17){
	 	return "adolescente";
	 }
	 else if(idade>=18 && idade<=64 ){
	 	return "adulto";
	 }
	 else if (idade>65){
	 	return "idoso";
	 }
	 else{
	 	return " idade invalida ";
	 }
}
int main(){
	int idade;
	string cat;
	cout<<" digite a sua idade: "<<endl;
	cin>>idade;
	cat=categoria(idade);
	cout<<" a sua categoria e: "<<cat<<endl;
	
	
	return 0;
}

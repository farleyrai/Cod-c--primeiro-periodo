#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int idade;
	float peso;
	cout<<" Informe o seu peso: "<<endl;
	cin>>peso;
	cout<<" Informe a sua idade: "<<endl;
	cin>>idade;
if(idade>0 && idade<20){
		if(peso>0 && peso<60){
			cout<<"grupo 9"<<endl;
		}
		else if(peso>=60 && peso<=90){
			cout<<"grupo 8"<<endl;
		}
		else if(peso>90){
			cout<<"grupo 7"<<endl;
		}
	}
	else if(idade>=20 && idade<=50){
		if(peso>0 && peso<60){
			cout<<"grupo 6"<<endl;
		}
		else if(peso>=60 && peso<=90){
			cout<<"grupo 5"<<endl;
		}
		else if(peso>90){
			cout<<"grupo 4"<<endl;
		}
	}
	else if(idade>50){
		if(peso>0 && peso<60){
			cout<<"grupo 3"<<endl;
		}
		else if(peso>=60 && peso<=90){
			cout<<"grupo 2"<<endl;
		}
		else if(peso>90){
			cout<<"grupo 1"<<endl;
		}
	}
	else{
		cout<<"peso ou idade invalido"<<endl;
	}
	return 0;
}

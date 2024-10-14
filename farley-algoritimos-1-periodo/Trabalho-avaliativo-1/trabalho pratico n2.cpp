#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int base, expo, pot;
	cout<<" digite a base :"<<endl;
	cin>>base;
	cout<<" digite o expoente: "<<endl;
	cin>>expo;
	if(expo==0){
		pot=1;
		cout<<" o resultado e "<<pot<<endl;
	}
	else if( expo==1){
		pot=base;
		cout<<" o resultado e: "<<pot<<endl;
	}
	else if( base<0 || expo<0){
		cout<<" potencia invalida"<<endl;
	
}
	else{
		pot=pow(base,expo);
		cout<<" o resultado e: "<<pot<<endl;
	}
	return 0;
}

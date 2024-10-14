#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int nume, mult;
	cout<<" Digite um numero inteiro e positivo: "<<endl;
	cin>>nume;
	
	mult=nume;
	for( int i=nume; i>0 ;i--){
		
	mult=mult*i;
	cout<<" o fatorial e "<< mult<<endl;
	}
	return 0;
}

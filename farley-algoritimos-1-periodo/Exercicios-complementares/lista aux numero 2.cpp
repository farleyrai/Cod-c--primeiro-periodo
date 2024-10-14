#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
     int minutos, horas,valor;
     cout<<"CONVERSOR DE MINUTOS PARA HORA"<<endl;
	cout<<" Digite os minutos "<<endl;
	cin>>minutos;
	horas=minutos/60;
	minutos%=60;
	cout<<" sera "<<horas<<" horas "<<"e "<<minutos<<" minutos "<<endl;
return 0;
}

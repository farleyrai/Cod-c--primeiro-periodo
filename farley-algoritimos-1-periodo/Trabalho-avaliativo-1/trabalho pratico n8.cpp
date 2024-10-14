#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
    float extras, falta, grat;
    double h;
    cout<<"digite o numero de horas extras"<<endl;
    cin>>extras;
    cout<<"digite o numero de horas que faltou ao trabalho"<<endl;
    cin>>falta;
    h= extras-(( 2.0/3.0)* falta);
     if( h>2.400){
     	grat=500;
	 }
	 else if( h>=1.800 && h<=2.400){
	 	grat=400;
	 }
	 else if( h>=1.200 && h<=1800){
	 	grat=300;
	 }
	 else if( h>=600 && h<1.200){
	 	grat=200;
	 }
	 else if(h>0 && h<600){
	 	grat=100;
	 }
	 cout<<" A gratificaçao de natal e de : R$ "<< grat<<endl;
    
	return 0;
}


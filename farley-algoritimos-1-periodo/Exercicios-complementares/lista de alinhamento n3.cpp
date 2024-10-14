//Crie um programa que dado dois valores inteiros, imprima qual o menor deles. //
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	int n1, n2, valor;
	cout<<" digite o primeiro valor: "<<endl;
	cin>>n1;
	cout<<" digite o segundo valor: "<<endl;
	cin>>n2;
	if(n1 < n2 ){
		cout<<n1<<" e menor";
	}
	else{
		cout<< n2 <<" e menor";
	}
return 0;
}

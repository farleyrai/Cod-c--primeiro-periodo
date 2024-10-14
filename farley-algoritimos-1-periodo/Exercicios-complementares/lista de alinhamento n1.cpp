/*Crie um programa que dado dois valores decimais,
 calcule qual a soma e a multiplicação destes valores. */
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2, soma,multi;
	 cout<<" Digite o primeiro numero: "<<endl;
	 cin>>n1;
	 cout<<" Digite o segundo numero: "<<endl;
	 cin>>n2;
	 soma=n1+n2;
	 multi=n1*n2;
	 cout<<" o resultado da soma sera: "<<soma<<endl
	     <<" o resultado da multiplicaçao sera: "<<multi<<endl;
	return 0;
}

#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int vetor[10], total=0;
	float media,cont=0;
	for( int i=0; i<10; i++){
		cont++;
		cout<<" digite o valor "<< i+1<<endl;
		cin>>vetor[i];
		total=total+vetor[i];
	}
	media=total/cont;
	cout<<" a media aritmetica sera: "<<media<<endl;
	cin>>media;
	return 0;
}

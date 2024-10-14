#include<iostream>
using namespace std;
int main(){
	int vetor[12],soma;
	float temp, media ;
	for(int i=0; i<12;i++){
		cout<<" digite a temperatura do mes "<< i+1<<endl;
	    cin>>vetor[i];
	    soma=soma+vetor[i];
	}
	media=soma/12;
	cout<<" a media das temperaturas sera: "<< media<<endl;
	for( int i=0; i<12; i++){	
	if(vetor[i] > media){
	cout<<"mes"<<i+1<<" esta acima da media com "<< vetor[i]<<endl;
	}
}
	return 0;
}

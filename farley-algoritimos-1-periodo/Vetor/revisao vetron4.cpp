#include<iostream>
using namespace std;
int main(){
	int vetor[10],vet1[10];
	for(int i=0;i<10;i++){
		cout<<" digite o valor do vetor 1: "<<i+1<<endl;
		cin>>vetor[i];
	}
	for(int i=0;i<10;i++){
		cout<<" digite o valor do vetor 2: "<<i+1<<endl;
		cin>>vet1[i];
	}
	for( int i=0;i<10; i++){
		if( vetor[i]>vet1[i]){
			cout<<" vetor 1 maior "<<vetor[i]<<endl;
		}
		else{
			cout<<" vetor 2 maior "<<vetor[i]<<endl;
		}
	}
	return 0;
}

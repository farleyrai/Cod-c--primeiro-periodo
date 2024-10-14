#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL," portuguese");
	int nume, i;
	cout<<" Digite um numero: "<<endl;
	cin>>nume;
	if(nume==1){
		cout<<"o numero nao e primo"<<endl;
	}
	for(int i=2;i<=nume; i++){
		if(nume%i==0){
			cout<<" o numero nao e primo "<<endl;
			break;
		}
		else{
			cout<<" o numero e primo. "<<endl;
			break;
		}
    }
	return 0;
}

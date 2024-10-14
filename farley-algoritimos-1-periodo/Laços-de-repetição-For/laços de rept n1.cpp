#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	
	for(int i=1; i<=50; i++){
		cout<<" levando "<< i <<" pão, voce paga "<< 0.18*i<<" Reais"<<endl;
		}
	return 0;
}

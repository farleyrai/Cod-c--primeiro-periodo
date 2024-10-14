#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
int main(){
	setlocale(LC_ALL," Portuguese");
	int base,expo;
	int potencia=1;
	cout<<" Digite a base: "<<endl;
	cin>>base;
	cout<<" Digite o expoente: "<<endl;
	cin>>expo;
	for(int i=0; i<expo; i++){
		potencia*=base;
	}
	cout<<" a potencia sera "<< potencia<<endl;
	return 0;
}

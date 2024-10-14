#include<iostream>
using namespace std;
void dobro(int &nume){
	nume=nume*2;
	cout<<"Valor dentro da funcao: "<<nume<<endl;
}
int main(){
 int nume;
 cout<<" digite um numero"<<endl;
 cin>>nume;
 dobro(nume);
 
 	cout<<"O valor de y e: "<<nume<<endl;
	
	return 0;
}

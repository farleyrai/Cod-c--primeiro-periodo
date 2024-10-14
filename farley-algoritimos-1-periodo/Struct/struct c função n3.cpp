#include<iostream>
using namespace std;
void triplo(float nume){
	nume=nume*3;
	cout<<" o valor inteiro da funcao "<< nume<<endl;
}
int main(){
	float nume;
	cout<<" digite o numero"<<endl;
	cin>>nume;
	triplo(nume);
	return 0;
}

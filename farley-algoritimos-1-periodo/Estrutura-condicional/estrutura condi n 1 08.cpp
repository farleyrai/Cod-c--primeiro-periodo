#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	float a, b, c;
	cout<<"Informe o lado A"<<endl;
	cin>>a;
	cout<<"Informe o lado B"<<endl;
	cin>>b;
	cout<<"Informe o lado C"<<endl;
	cin>>c;
	if(a+b>c && a+c>b && b+c>a){
		cout<<" é possivel formar um triangulo."<<endl;
	}
	else{
		cout<<" não é possivel."<<endl;
	}
	return 0;
}

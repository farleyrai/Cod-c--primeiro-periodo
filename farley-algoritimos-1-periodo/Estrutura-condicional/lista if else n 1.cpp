#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int numero;
	cout<<"digite um numero: "<<endl;
	cin>>numero;
	if(numero%2==0){
	cout<<" � par. "<<endl;
}
    else{
	cout<<" � impar. "<<endl;
}
	return 0;
}

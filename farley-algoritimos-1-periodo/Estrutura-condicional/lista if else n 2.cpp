#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	int nume;
	cout<<"digite um numero: "<<endl;
	cin>>nume;
	if(nume>0){
		cout<<" � positivo."<<endl;
		cout<<nume*2<<endl;
	}
	else{
		cout<<" � negativo."<<endl;
		cout<<nume*3<<endl;
	}
	return 0;
}

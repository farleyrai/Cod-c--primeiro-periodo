#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL," portuguese");
	int num=1;
	float soma=1.0;
	cout<<" digite um numero:"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++){
	soma+=(1.0/i);
	}
	cout<<" o resultado e "<< soma<<endl;
	return 0;
}

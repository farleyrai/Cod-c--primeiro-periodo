#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	int angulo, seno, cosseno,tangente;
	cout<<"CALCULADORA DE SENO, COSSENO E TANGENTE"<<endl;
	system("pause");
	cout<<"qual e o angulo"<<endl;
	cin>>angulo;
	cout<<"seno "<<sin(angulo)<<endl;
	cout<<"cosseno "<<cos(angulo)<<endl;
	cout<<"tangente "<<tan(angulo)<<endl;
	return 0;
}

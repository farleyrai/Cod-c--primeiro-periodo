#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
float v1,v2, saldo, cheque1, cheque2;
cout<<" digite o seu saldo: "<<endl;
cin>>saldo;
cout<<" digite o valor do primeiro cheque: "<<endl;
cin>>cheque1;
cout<<" digite o valor do segundo cheque: "<<endl;
cin>>cheque2;
v1=(cheque1*0.0038)+(cheque2*0.0038);
v2=saldo-(v1+cheque1+cheque2);
cout<<" o seu saldo sera: "<<v2;
	return 0;
}


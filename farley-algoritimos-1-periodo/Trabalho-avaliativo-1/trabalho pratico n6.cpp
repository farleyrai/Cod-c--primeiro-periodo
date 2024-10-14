#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
    float invest, tipo,total;
    cout<<" digite o valor do seu investimento: "<<endl;
    cin>>invest;
    cout<<"[1] para poupança. "<<endl
        <<"[2] para fundos de renda fixa."<<endl;
    cin>>tipo;
     if(tipo==1){
    	total=invest+(invest*0.03);
    	cout<<" o rendimento mensal sera: "<<total;
	}
	else if( tipo==2){
		total= invest+(invest*0.04);
		cout<<"o rendimento mensal sera: "<<total<<endl;
	}
	else{
		cout<<" opcao invalida."<<endl;
	}
    	return 0;
}


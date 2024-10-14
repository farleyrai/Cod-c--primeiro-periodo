#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int nivel, cont=0, cont1=0, cont2=0,cont3=0, cont4=0;
	float soma;
	cout<<"[1] muito satisfeito"<<endl
	    <<"[2] insatisfeito"<<endl
	    <<"[3] mediano"<<endl
	    <<"[4] bom"<<endl
	    <<"[5] exelente"<<endl;
	    cin>>nivel;
	    if(nivel==1){
			cont++;
		}
		if(nivel==5){
			cont4++;
		}
	while( nivel>0 ){
		cin>>nivel;
		if(nivel==1){
			cont++;
		}
		if(nivel==2){
			cont1++;
		}
		if( nivel==3){
			cont2++;
		}
		if( nivel==4){
			cont3++;
		}
		if( nivel==5){
			cont4++;
		}
	}
	cout<<" muito insatisfeito : "<<cont<<endl;
	cout<<" insatisfeito: "<<cont1<<endl;
	cout<<" mediano: "<<cont2<<endl;
	cout<<" bom: "<<cont3<<endl;
	cout<<" exelente: "<<cont4<<endl;
	soma=(cont+cont1+cont2+cont3+cont4)/5;
	cout<<" a media dos niveis sera: "<<soma<<endl;
	return 0;
}

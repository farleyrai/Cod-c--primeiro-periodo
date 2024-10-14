#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float n, nume=0, soma=0, media=0, cont=0;
	do{
		cout<<" insira um numero maior que 0 : "<<endl;
		cin>>nume;
		soma=soma+nume;
		cont++;
	}while( nume>0);
	media=soma/(cont-1.0);
	cout<<" a soma e: "<<soma<<endl;
	cout<<" a media sera: "<<media<<endl;
	return 0;	
}

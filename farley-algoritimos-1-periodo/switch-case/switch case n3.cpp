#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
    char letra;
    cout<<" Digite uma letra: "<<endl;
    cin>>letra;
    switch(letra){
    	case  'a':
    	case  'e':
    	case  'i':
    	case  'o':
    	case  'u':
    	cout<<" Vogal. "<<endl;
    	break;
    	
    	default:
    		cout<<" Consoante. "<<endl;
	}
	return 0;
}

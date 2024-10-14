#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int nume;
	cout<<"digite um numero"<<endl;
	cin>>nume;
	if(nume%5==0 || nume%7==0){
		cout<<"é divisivel"<<endl;
	}
	else{
		cout<<"não é divisivel por nenhum dos dois"<<endl;
	}
	
	return 0;
	}
	

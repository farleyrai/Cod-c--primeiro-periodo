#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream objeto;
	objeto.open(" dados.txt");
	if(objeto.is_open()){
		objeto<<"saudades de vc "<<endl;
		objeto.close();
	}
	else{
		cout<<" nao foi aberto"<<endl;
	}
	
	
	
	return 0;
}

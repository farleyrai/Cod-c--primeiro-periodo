#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
fstream objeto("dados.txt");
string linha;
if(objeto.is_open()){
	getline(objeto, linha);
	cout<<linha;
	objeto.close();
	
}
else{
	cout<<" nao encontrado "<<endl;
}
	
	return 0;
}

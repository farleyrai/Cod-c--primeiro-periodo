#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	string usuario,senha;
	cout<<"Digite seu usu�rio "<<endl;
    cin>>usuario;
    cout<<"Digite uma senha! "<<endl;
    cin>>senha;
    while ( usuario == senha){
        cout<<"A senha n�o pode ser igual ao nome,digite outra senha "<<endl;
        cin>>senha;
		 }
    cout<<"Nome de usuario: "<<usuario<<endl;
    cout<<"Senha: "<<senha<<endl; 
	return 0;
}

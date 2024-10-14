//Calcule a quantidade dinheiro gasto por um fumante. Dados: o número de
//anos que ele fuma, o no de cigarros fumados por dia e o preço de uma carteira com 20
//cigarros.
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese");
	float anos, cigarros, preco, res1,res2;
	cout<<"ha quanto anos ele fuma: "<<endl;
	cin>>anos;
	cout<<"quantos cigarros ele fuma por dia: "<<endl;
	cin>>cigarros;
	cout<<"o preco de uma carteira com 20 cigarros: "<<endl;
	cin>>preco;
	res1=(anos*365)*cigarros;
	res2=(res1/20)*preco;
	cout<<"o resultado sera: "<<res2<<endl;
	return 0;
}

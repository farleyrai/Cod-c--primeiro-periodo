#include<iostream>
using namespace std;
int main(){
float bonus, compra, cont=0;
for( int i=0;i<15;i++){
	cont++;
	cout<<" Digite o valor da compra do cliente "<<cont<<endl;
	cin>>compra;
	}
if( compra>0 && compra<1000){
	bonus=compra*0.10;
	cout<<" o valor do bonus sera: "<<bonus<<endl;
}
else if(compra>1000){
	bonus=compra*0.15;
	cout<<" o valor do bonus sera: "<<bonus<<endl;
}
else{
	cout<<" compra invalida.";
}
for(int i=0;i<15;i++){
cout<<" cliente "<<i+1<<" recebe o bonus de "<<bonus<<endl;

}
		return 0;
}

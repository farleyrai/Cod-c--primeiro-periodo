#include<iostream>
using namespace std;
int main(){
	float temperatura_f ,temperatura_c , fahrenheit, celsius;
	
	cout<<"digite a temperatura de celsius:"<<endl;
	cin>>celsius;
		

	cout<<"digite a temperatura de fahrenheit:"<<endl;
	cin>>fahrenheit;
	
		temperatura_f=fahrenheit=(celsius*9/5)+32;
		temperatura_c=celsius=5*(fahrenheit-32)/9;
	
	
	
	cout<<" a temperatura celsius em fahrenheit e :"<<temperatura_f<<endl;
	cout<<" a temperatura fahrenheit em celsius e:"<<temperatura_c<<endl;
	
	return 0;
}

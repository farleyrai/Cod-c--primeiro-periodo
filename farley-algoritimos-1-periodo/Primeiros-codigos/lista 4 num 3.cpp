#include<iostream>
#define FATOR 0.5
using namespace std;
int main(){
	float volume,soluto;
	cout<<"qual o volume "<<endl;
	cin>>volume;
	cout<<"qual o soluto"<<endl;
	cin>>soluto;
	soluto=volume*soluto*FATOR;
	cout<<"o resultado sera "<<soluto<<endl;
	return 0;
}

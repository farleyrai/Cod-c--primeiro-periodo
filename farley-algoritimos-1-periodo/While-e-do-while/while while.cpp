#include<iostream>
using namespace std;
int main(){
	float popA=80000, popB=200000, txA=0.03, txB=0.015;
	int ano=0;
	
	while( popA<=popB){
		popA=popA+(popA*txA);
		popB=popB+(popB*txB);
		ano++;

	}
	cout<<" quantidade: "<<ano<<endl;
	
	return 0;
}

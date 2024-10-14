#include<iostream>
#include<math.h>
#define TAXA 0.3
using namespace std;
int main(){
	float montante ,capital, tempo;
	cout<<"qual o capital "<<endl;
	cin>>capital;
	cout<<"qual o tempo "<<endl;
	cin>>tempo;
	montante=capital*+pow((1+TAXA),tempo);
	cout<<"resultado "<<montante<<endl;
	return 0;
}

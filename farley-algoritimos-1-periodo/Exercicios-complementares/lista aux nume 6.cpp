#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
int main(){
	float raio, area, perimetro;
	cout<<"qual e o raio "<<endl;
	cin>>raio;
	area=PI*raio*raio;
	perimetro=2*PI*raio;
	cout<<"a area sera "<<area<<endl;
	cout<<"o perimetro sera "<<perimetro<<endl;
	return 0;
}

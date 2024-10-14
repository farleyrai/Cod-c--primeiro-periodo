#include<iostream> 
using namespace std; 
int main(){ 
int vetor[10],total,nota; 
float media;
for(int i=0;i<10;i++){
	cout<<"digite a nota do atleta: "<<i+1<<endl;
	cin>>vetor[i];
    total=total+vetor[i];
}
media=total/10;
cout<<" a media das notas sera: "<<media<<endl;

return 0; 
} 



/*Crie um programa que tenha uma fun��o fatorial() que receba um 
n�mero inteiro e
retorne o fatorial desse n�mero. Use o tipo void.*/
#include<iostream>
using namespace std;
void fat(int num){
    int fator=1;
    for ( int i = num ; i >= 1 ; i -- ){
        
        fator = fator * i;
        
     if ( fator != num ){
        cout<<" x "<<i<< " = " <<fator<<" " ;

     }  
}
}

int main(){
   int num,fator;
   cout<<"Digite um numero inteiro: "<<endl;
   cin>>num;
   fat(num);
  

    return 0;
}


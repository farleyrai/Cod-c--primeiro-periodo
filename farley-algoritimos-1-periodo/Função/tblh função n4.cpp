/*Fa�a um programa que use a fun��o valorPagamento para
 determinar o valor a serpago por uma presta��o de uma conta.
  O programa dever� solicitar ao usu�rio ovalor da presta��o 
  e o n�mero de dias em atraso e passar estes valores para a
fun��o valorPagamento, que calcular� o valor a ser pago e devolver� 
este valor aoprograma que a chamou. O programa dever� ent�o exibir o 
valor a ser pago. Use otipo void.*/
#include<iostream>
using namespace std;
void valorPagamento(float valorP,int dias){
     float multa,juros,tot;
     multa=valorP*0.03;
     juros=valorP*0.001*dias;
     tot=valorP+multa+juros;
     cout<<"valor a ser pago: "<<tot<<endl;
}
int main(){
    float valorP;
    int dias;
    cout<<"digite o valor da prestacao: "<<endl;
    cin>>valorP;

    cout<<"digite o numero de dias em atraso: "<<endl;
    cin>>dias;

    valorPagamento(valorP,dias);


    return 0;
}

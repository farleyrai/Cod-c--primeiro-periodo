#include<iostream>
#include<locale.h>
using namespace std;
int main (){
	int menu;
	setlocale(LC_ALL,"portuguese");
    cout<<"[1] Pratos principais."<<endl
        <<"[2] Bebidas."<<endl
        <<"[3] Sobremesas."<<endl;
    cin>>menu;
    switch(menu){
    	case 1:
    		cout<<" Strogonoff."<<endl
    		    <<" Feijoada."<<endl
    		    <<" Risoto."<<endl;
    		    break;
    	case 2:
		    cout<<" Refrigerante. "<<endl
			    <<" Suco de fruta. "<<endl
				<<" Cerveja. "<<endl;
				break;
		case 3:
		    cout<<" Pudim. "<<endl
			    <<" mousee de abacaxi. "<<endl
				<<" mousse de chocolate."<<endl;
				break;
	default:
		cout<<" Opcao invalida"<<endl;
	}
        return 0;
}

#include <iostream>
#include <math.h> 
using namespace std;
int main() {
    int  base , expo,result,cont = 0;
    do {
        cout << "Digite o valor da base: "<<endl;
        cin >>base;
        cout << "Digite o valor do expoente: "<<endl;
        cin >> expo;
        result = pow(base, expo);
		cout << " a base elevado ao expoente e igual: " << result<<endl;
		cont++;
    } 
	while (cont < 7); 
	return 0;
}


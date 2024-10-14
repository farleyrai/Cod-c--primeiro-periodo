#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
    float pes, jardas, milhas, polegadas;
    cout << "Digite a medida em pés: ";
    cin >> pes;
     polegadas = pes * 12;              
     jardas = pes / 3;                 
     milhas = pes / (3 * 1760);        
    cout << "Medida em polegadas: " << polegadas << endl;
    cout << "Medida em jardas: " << jardas << endl;
    cout << "Medida em milhas: " << milhas << endl;
	return 0;
}


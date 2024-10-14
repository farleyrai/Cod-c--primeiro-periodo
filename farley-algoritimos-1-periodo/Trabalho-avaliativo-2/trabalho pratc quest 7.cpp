#include<iostream>
#include<locale.h>
#include<cmath>
using namespace std;
int main(){
    setlocale(LC_ALL, "portuguese");
    float massaI, massa2;
    int horas, min, seg = 0, tempo = 0;
    cout << "Digite a massa inicial em gramas: " << endl;
    cin >> massaI;
    massa2 = massaI;
    while (massa2 >= 0.5) {
        massa2 = massa2 / 2;
        tempo = tempo + 50;
    }
    horas = tempo / 3600;
    min = (tempo % 3600) / 60;
    seg = tempo % 60;
    cout << "Massa inicial: " << massaI << " gramas" << endl;
    cout << "Massa final: " << massa2 << " gramas" << endl;
    cout << "Tempo necessário: " << horas << " horas, " << min << " min e " << seg << "segundos"<<endl;
return 0;
}

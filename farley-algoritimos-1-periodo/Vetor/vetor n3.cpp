#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "portuguese");
    int vet[10];
    int maior, posicao;
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i << ": "<<endl;
        cin >> vet[i];
    }
    maior = vet[0];
    posicao = 0;
    for (int i = 1; i < 10; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posicao = i;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << "Vetor: " << vet[i] << endl;
    }
    cout << "O maior número é: " << maior << endl;
    cout << "Sua posição é: " << posicao << endl;
    return 0;
}

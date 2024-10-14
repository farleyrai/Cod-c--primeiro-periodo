#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "portuguese");
    int vet[8];
    int x, y;
    cout << "Digite 8 valores para o vetor:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Posição " << i << ": "<<endl;
        cin >> vet[i];
    }
    cout << "Digite a posição x (entre 0 e 7): ";
    cin >> x;
    cout << "Digite a posição y (entre 0 e 7): ";
    cin >> y;
    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        int soma = vet[x] + vet[y];
        cout << "A soma dos valores nas posições é: " << soma << endl;
    } else {
        cout << "As posições devem estar entre 0 e 7." << endl;
    }
    return 0;
}

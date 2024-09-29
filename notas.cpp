#include <iostream>
using namespace std;

int main() {
  
    float notas[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> notas[i];
    }
    cout << "As notas armazenadas são: ";
    for (int i = 0; i < 3; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;

    float maior = notas[0];
    for (int i = 1; i < 3; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    cout << "A maior nota obtida é: " << maior << endl;

    return 0;
}

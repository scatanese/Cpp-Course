#include <iostream>

using namespace std;

int main() {
    double peso, altezza, indice, k;
    int i, conta;

    conta = 0;

    cout << "Immetti limite indice obesita' (K): ";
    cin >> k;
    for (i = 1; i <= 5; i++) {
        cout << "Immetti il peso della " << i << " persona (Kg): ";
        cin >> peso;
        cout << "Immetti altezza della " << i << " persona (cm): ";
        cin >> altezza;
        indice = peso / altezza*altezza;
        cout << "Indice di obesita' :" << indice << endl;
        if (indice > k) {
            conta = conta + 1;
        }
    }
    cout << "Numero di persone che superano l'indice di obesita' (K="<< k <<"): " << conta << endl;
    return 0;
}

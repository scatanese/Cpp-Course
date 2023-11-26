/*
 Dati due numeri interi stampa il maggiore
 se i due numeri sono uguali stampa la somma.
*/ 

#include <iostream>

using namespace std;

int main()
{
    // definizione variabili intere
    int a, b;
    int max=0;

    // input dei dati
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    
    // confronta i numeri inseriti e determina il maggiore
    if (a == b) {
        cout << "I numeri immessi sono uguali" << endl;
        cout << "la loro somma e': " << a + b;
        return 0;
    }
    else if (a > b)
        max = a;
    else max = b;
    // output
    cout << "Il numero maggiore e': " << max;

    return 0;
}


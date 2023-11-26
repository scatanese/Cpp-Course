/*
Dati due numeri interi
determina se un terzo numero è compreso nell'intervallo.
L'algoritmo utilizza lo swap delle variabili.
*/ 

#include <iostream>

using namespace std;

int main()
{
    // definizione variabili intere
    int a, b, c;

    // input dei dati
    cout << "Inserisci il limite inferiore dell'intervallo: ";
    cin >> a;
    cout << "Inserisci il limite superiore dell'intervallo: ";
    cin >> b;

    // se a>b effettua lo swap delle variabili  
    // spostando in a il minore ed in b il maggiore
    // utilizzando la variabile d'appoggio c
    if (a > b)
    {
        c = a; a = b; b = c;
    }

    // legge altro numero
    cout << "Inserisci un numero:";
    cin >> c;

    // determina se il numero inserito
    // è compreso nell'intervallo e stampa risultato
    // del test
    if (c >= a && c <= b)
        cout << "il numero " << c << " e' compreso nell'intervallo [" << a << "," << b << "]";
    else
        cout << "il numero " << c << " NON e' compreso nell'intervallo [" << a << "," << b << "]";

    return 0;
}


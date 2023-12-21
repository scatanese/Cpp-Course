/*
Birreria_ridotto.cpp
*/

#include <iostream>

using namespace std;

int main() {
    // definizione variabili
    float conto, prezzobirra, spesa1, spesa2, spesa3;
    int birre1, birre2, birre3;

    // input
    cout << "inserisci le birre prese dal primo amico " << endl;
    cin >> birre1;
    cout << "inserisci le birre prese dal secondo amico " << endl;
    cin >> birre2;
    cout << "inserisci le birre prese dal terzo amico " << endl;
    cin >> birre3;
    cout << "inserisci il conto " << endl;
    cin >> conto;

    // calcoli
    prezzobirra = conto / (birre1 + birre2 + birre3);
    spesa1 = prezzobirra * birre1;
    spesa2 = prezzobirra * birre2;
    spesa3 = prezzobirra * birre3;

    // output prima del riparto delle spese
    cout << "prezzo di una birra: " << prezzobirra << endl;
    cout << endl;
    cout << "spesa prima del riparto" << endl;
    cout << "=======================" << endl;
    cout << "primo amico: " << spesa1 << endl;
    cout << "secondo amico: " << spesa2 << endl;
    cout << "terzo amico: " << spesa3 << endl;

    // condizioni di selezione
    if (birre1 == 1 && birre2 > 1 && birre3 > 1 || birre1 > 1 && birre2 == 1 && birre3 > 1 || birre1 > 1 && birre2 > 1 && birre3 == 1) {
        if (birre1 == 1) {
            spesa2 = spesa2 + spesa1 / 2;
            spesa3 = spesa3 + spesa1 / 2;
            cout << endl;
            cout << "il conto viene pagato dal secondo e dal terzo amico" << endl;
            cout << "===================================================" << endl;
            cout << "spesa secondo amico: " << spesa2 << endl;
            cout << "spesa terzo amico: " << spesa3 << endl;
        }
        else {
            if (birre2 == 1) {
                spesa1 = spesa1 + spesa2 / 2;
                spesa3 = spesa3 + spesa2 / 2;
                cout << endl;
                cout << "il conto viene pagato dal primo e dal terzo amico" << endl;
                cout << "===================================================" << endl;
                cout << "spesa primo amico: " << spesa1 << endl;
                cout << "spesa terzo amico: " << spesa3 << endl;
            }
            else {
                spesa1 = spesa1 + spesa3 / 2;
                spesa2 = spesa2 + spesa3 / 2;
                cout << endl;
                cout << "il conto viene pagato dal primo e dal secondo amico" << endl;
                cout << "===================================================" << endl;
                cout << "spesa primo amico: " << spesa1 << endl;
                cout << "spesa secondo amico: " << spesa2 << endl;
            }
        }
    }
    else {
        if (birre1 == 1 && birre2 == 1 && birre3 > 1 || birre1 == 1 && birre2 > 1 && birre3 == 1 || birre1 > 1 && birre2 == 1 && birre3 == 1) {
            if (birre1 > 1) {
                cout << endl;
                cout << "***" << endl;
                cout << "il conto e' pagato interamente dal primo amico: " << conto << endl;
            }
            else {
                if (birre2 > 1) {
                    cout << endl; 
                    cout << "***" << endl;
                    cout << "il conto e' pagato interamente dal secondo amico: " << conto << endl;
                }
                else {
                    cout << endl;
                    cout << "***" << endl;
                    cout << "il conto e' pagato interamente dal terzo amico: " << conto << endl;
                }
            }
        }
        else {
            if (birre1 == 1 && birre2 == 1 && birre3 == 1 || birre1 > 1 && birre2 > 1 && birre3 > 1) {
                cout << endl;
                cout << "Ciascun amico paga le proprie birre" << endl;
                cout << "===================================" << endl;
                cout << "primo amico: " << spesa1 << endl;
                cout << "secondo amico: " << spesa2 << endl;
                cout << "terzo amico: " << spesa3 << endl;
            }
            else {
                cout << endl;
                cout << "***" << endl;
                cout << "Uno o piu' amici non hanno preso birre. Ciascuno paga per se." << endl;
            }
        }
    }
    return 0;
}


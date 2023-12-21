/*
Birreria.cpp
*/

#include <iostream>

using namespace std;


int main() {
    // definizione delle variabili
    float conto, prezzobirra, spesa1, spesa2, spesa3;
    int birre1, birre2, birre3;

    // input
    cout << "inserisci le birre prese dal primo amico: " << endl;
    cin >> birre1;
    cout << "inserisci le birre prese dal secondo amico: " << endl;
    cin >> birre2;
    cout << "inserisci le birre prese dal terzo amico: " << endl;
    cin >> birre3;
    cout << "inserisci il conto: " << endl;
    cin >> conto;

    // calcoli
    prezzobirra = conto / (birre1 + birre2 + birre3);
    spesa1 = prezzobirra * birre1;
    spesa2 = prezzobirra * birre2;
    spesa3 = prezzobirra * birre3;
    // stampa prima del riparto delle spese
    cout << "prezzo di una birra: " << prezzobirra << endl;
    cout << endl;
    cout << "spesa prima del riparto" << endl;
    cout << "=======================" << endl;
    cout << "primo amico: " << spesa1 << endl;
    cout << "secondo amico: " << spesa2 << endl;
    cout << "terzo amico: " << spesa3 << endl;

    // condizioni della selezione
    if (birre1 == 1 && birre2 > 1 && birre3 > 1) {
        spesa2 = spesa2 + spesa1 / 2;
        spesa3 = spesa3 + spesa1 / 2;
        cout << endl;
        cout << "il conto viene pagato dal secondo e dal terzo amico" << endl;
        cout << "===================================================" << endl;
        cout << "spesa secondo amico: " << spesa2 << endl;
        cout << "spesa terzo amico: " << spesa3 << endl;
    }
    else {
        if (birre1 > 1 && birre2 == 1 && birre3 > 1) {
            spesa1 = spesa1 + spesa2 / 2;
            spesa3 = spesa3 + spesa2 / 2;
            cout << endl;
            cout << "il conto viene pagato dal primo e dal terzo amico" << endl;
            cout << "=================================================" << endl;
            cout << "spesa del primo amico: " << spesa1 << endl;
            cout << "spesa terzo amico: " << spesa3 << endl;
        }
        else {
            if (birre1 > 1 && birre2 > 1 && birre3 == 1) {
                spesa1 = spesa1 + spesa3 / 2;
                spesa2 = spesa2 + spesa3 / 2;
                cout << endl;
                cout << "il conto viene pagato dal primo e dal secondo amico" << endl;
                cout << "===================================================" << endl;
                cout << "spesa del primo amico: " << spesa1 << endl;
                cout << "spesa secondo amico: " << spesa2 << endl;
            }
            else {
                if (birre1 == 1 && birre2 == 1 && birre3 > 1) {
                    cout << endl;
                    cout << "***" << endl;
                    cout << "il conto viene pagato dal terzo amico: " << conto << endl;
                }
                else {
                    if (birre1 > 1 && birre2 == 1 && birre3 == 1) {
                        cout << endl;
                        cout << "***" << endl;
                        cout << "il conto viene pagato dal primo amico: " << conto << endl;
                    }
                    else {
                        if (birre1 == 1 && birre2 > 1 && birre3 == 1) {
                            cout << endl;
                            cout << "***" << endl;
                            cout << "il conto viene pagato dal secondo amico: " << conto << endl;
                        }
                        else {
                            if (birre1 == 1 && birre2 == 1 && birre3 == 1 || birre1 > 1 && birre2 > 1 && birre3 > 1) {
                                cout << endl;
                                cout << "***" << endl;
                                cout << "ogni amico paga la propria birra" << endl;
                            }
                            else {
                                if (birre1 == 0 || birre2 == 0 || birre3 == 0) {
                                    cout << endl;
                                    cout << "***" << endl;
                                    cout << "uno o piu' amici non hanno consumato birra. Ogni amico paga per se" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

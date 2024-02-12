#include <iostream>

using namespace std;


int main() {
    double costomateriale, spesatotale;
    int orelavoro;

    cout << "Immetti costo del materiale (euro): ";
    cin >> costomateriale;
    cout << "Immetti ore lavoro: ";
    cin >> orelavoro;
    cout << "costo del lavoro (euro):  " << orelavoro * 40 << endl;
    spesatotale = orelavoro * 40 + costomateriale;
    if (spesatotale <= 100) {
        cout << "Spesa: " << spesatotale << endl;
        cout << "Il conto da pagare e' di euro 100" << endl;
    }
    else {
        cout << "La spesa totale ammonta a euro: " << spesatotale << endl;
    }
    return 0;
}



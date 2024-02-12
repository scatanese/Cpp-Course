#include <iostream>

using namespace std;

int main() {
    double qbase, qaccessoria, qtotale, superfice, agevolazione;
    int nfigli;

    cout << "Immetti quota base (euro): ";
    cin >> qbase;
    cout << "Immetti superfice appartamento (mq): ";
    cin >> superfice;
    cout << "Immetti numero di figli: ";
    cin >> nfigli;

    qaccessoria = superfice * 5;
    cout << "Quota accessoria: " << qaccessoria << endl;
    qtotale = qbase + qaccessoria;

    if (nfigli > 0) {
        agevolazione = nfigli * 10;
        cout << "Agevolazione (euro):" << agevolazione << endl;
        qtotale = qtotale - agevolazione;
    }
    cout << "Quota complessiva (euro): " << qtotale << endl;

    return 0;
}

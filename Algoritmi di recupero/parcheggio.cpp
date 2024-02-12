#include <iostream>

using namespace std;

int main() {
    double totale=2;
    int ore;

    cout << "Immetti durata della sosta (ore): " << endl;
    cin >> ore;
    if (ore > 1) {
        totale = totale + (ore - 1) * 1.5;
        cout << "Prima ora (euro): " << 2 << endl;
        cout << "Ore successive alla prima (euro): " << (ore - 1) * 1.5 << endl;
        cout << "Totale da pagare (euro): " << totale << endl;
    }
    else {
        cout << "Sosta prima ora (euro): " << totale << endl;
    }
    return 0;
}


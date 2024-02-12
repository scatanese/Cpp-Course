#include <iostream>

using namespace std;

int main() {
    
    double prezzo, contanti;

    cout << "Immetti prezzo di un oggetto: ";
    cin >> prezzo;
    cout << "Immetti contanti disponibili nel borsello: ";
    cin >> contanti;

    if (contanti >= prezzo) {
        cout << "E' possibile acquistare l'oggetto. Nel borsello restano euro: " << contanti - prezzo << endl;
    }
    else {
        cout << "Non e' possibile acquistare l'oggetto!" << endl;
    }
    return 0;
}

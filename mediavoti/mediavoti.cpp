#include <iostream>


using namespace std;

int main() {
    int n, i, inrange;
    double voto, media;

    i = 0;
    inrange = 0;
    media = 0;
    cout << "Immetti numero di materie: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "Immetti voto materia " << i << endl;
        cin >> voto;
        if (voto >= 3 || voto <= 9) {
            inrange = inrange + 1;
            media = media + voto;
        }
    }
    media = media / inrange;
    cout << "Media dei voti: " << media << endl;
    return 0;
}


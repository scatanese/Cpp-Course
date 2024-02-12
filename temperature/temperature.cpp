#include <iostream>

using namespace std;

int main() {
    int n, i;
    float temperatura, sottozero, media;

    i = 0;
    media = 0;
    sottozero = 0;

    cout << "Immetti numero di citta': ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "Immetti temperatura citta' " << i << " : ";
        cin >> temperatura;
        if (temperatura < 0) {
            sottozero = sottozero + 1;
        }
        media = media + temperatura;
    }

    media = media / n;

    cout << "Numero di citta' con temperature sotto lo zero: " << sottozero << endl;
    cout << "Media delle temperature: " << media << endl;
    return 0;
}


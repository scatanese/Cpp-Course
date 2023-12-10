#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "inserisci un numero intero: ";
    cin >> a;

    if ((a % 2)==0)
        cout << "il numero " << a << " e\' pari";
    else
        cout << "il numero " << a << " e\' dispari";
}
/* pianocartesiano.cpp 
 Date le coordinate di un punto sul piano cartesiano
 individuare il relativo quadrante
 input: x, y di tipo Reale, q intero
 output: q -> quadrante 
 
 Autore: Emanuele Catanese
 Classe: 3 ITL
*/
	

#include <iostream>
using namespace std;

int main()
{
    // definizione variabili
	float x, y;
    int q;

	// input
    cout << "Immetti la coordinata x del punto: ";
    cin >> x;

    cout << "Immetti la coordinata y del punto: ";
    cin >> y;

	// controlla se le coordinate coincidono con l'origine degli assi
    if (x == 0 && y == 0) {
        cout << endl;
        cout << "Origine del piano cartesiano\n";
        return 0;
    }

	// verifica il quadrante
    if (x > 0 && y > 0) q = 1;		// I quadrante
    else if (x < 0 && y > 0) q = 2;	// II quadrante
    else if (x < 0 && y < 0) q = 3;	// III quadrante
    else q = 4;						// IV quadrante

	// output risultato
    cout << endl;
    cout << "Il punto di coordinate (" << x << "," << y <<")" << " si trova nel quadrante: " << q << endl;

}


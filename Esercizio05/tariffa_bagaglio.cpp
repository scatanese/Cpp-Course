/*
Su alcuni voli aerei, i bagagli fino a 20 Kg non pagano, oltre questo limite si deve pagare, 
per ogni Kg in più, il 2% della tariffa del biglietto aereo. Stampa il prezzo totale del biglietto.
*/
#include <iostream>
using namespace std;

int main()
{
	float t, p, c;
	cout << "Inserisci il peso del bagaglio ";
	cin >> p;
	cout << "Inserisci il costo del biglietto ";
	cin >> t;
	
	if (p <= 20)
		c = t;
	else
		//c = t * (0.6f + 0.02f * p);
		c = t + ((t*0.02f) * (p - 20));
	cout << "Il prezzo del biglietto e\' " << c;
	
	return 0;
}
/* 
Algoritmo di Selezione
Data la media di uno studente, calcolare l'importo da versare per l'iscrizione all'anno successivo 
sapendo che tale importo prevede una quota fissa di € 18,00 e una quota aggiuntiva di € 25,00 
se la media dei voti è inferiore a 7, di € 17,50 se la media dei voti è compresa tra 7 e 8 e nessuna 
quota aggiuntiva se la media dei voti è superiore a 8.
Nel caso in cui il reddito familiare sia inferiore a € 16.000,00, l'importo finale è ridotto del 40%.
*/

#include <iostream>

using namespace std;

int main()
{
	// definizione costanti
	const float redditoLimite = 16000.0f;
	const float riduzione = 0.4f;	// 4%

	// dichiarazione delle variabili
	float mediaVoti, importoBase=18.0f, importoFinale, redditoFamiliare;

	// Input della media dei voti
	cout<<"Inserisci media: ";
	cin >> mediaVoti;

	// controllo del valore di input della media 
	if (mediaVoti < 6 || mediaVoti > 10) {
		cout << ("Valore inserito errato! La media deve essere tra 6 e 10");
		return 0;
	}

	// Input del reddito familiare
	cout << ("Inserisci reddito: ");
	cin >> redditoFamiliare;
	
	// controllo del valore di input del reddito familiare
	if (redditoFamiliare <= 0) {
		cout << ("Errore: valore inserito minore di zero");
		return 0;
	}

	// Aggiunta della quota aggiuntiva in base alla media
	if (mediaVoti < 7)
		importoBase += 25.0f; 
	else if (mediaVoti <= 8)
		importoBase += 17.5f;

	/*
	* Calcolo importo da versare
	*/

	// Riduzione del 40% seil reddito familiare è inferiore a € 16.000,00
	if (redditoFamiliare < redditoLimite)
		importoFinale = importoBase - (importoBase * riduzione);
	else {
		importoFinale = importoBase;
	}

	// Output dell'importo da versare 
	cout<<("L'importo da versare per l'iscrizione all'anno sucessivo e' di Euro: ") << importoFinale;

	return 0;
}
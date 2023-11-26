// Primo programma in C++
//

/*
il simbolo # precede un comando per il preprocessore
include è un comando per il preprocessore che copia il contenuto
del file specificato nel codice sorgente. iostream fa parte della 
libreria standard di C++, e contiene il codice per la visualizzazione e 
l'inserimento del testo.
*/
#include <iostream>

/*
Il comando using dice al compilatore di utilizzare tutti i nomi 
dello spazio dei nomi "std" senza il loro prefisso. 
Il file iostream definisce tre nomi utilizzati in questo programma 
- cout, cin e endl - definiti nello spazio dei nomi std.
Senza using occorreva includere il prefisso e scrivere std::cout, 
std:cin, std::endl
*/
using namespace std;

int main()
{
    cout << "Hello World!\n";       // vado a capo con \n
    cout << "Ciao Mondo!" << endl;  // e qui con endl 

    /*
    Il valore restituito dalla funzione main() segnala al sistema operativo che l'esecuzione
    si è conclusa senza errori.Di default, un programma C++ restituisce sempre 0 se l'istruzione 
    return non è presente.
    */
    return 0;
}


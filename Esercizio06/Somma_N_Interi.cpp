#include <iostream>
using namespace std;

int main(){
  
  # definizione delle variabili intere
  int somma=0, i=0, n, numero;

  # input numeri da sommare
  cout << "Quanti numeri da sommare? ";
  cin >> n;
  
  # iterazione
  while (i < n) {
      cout << "numero " << i+1 << ": ";
      cin >> num
      
      # aggiunge  il valore inserito alla variabile che conterrà la somma degli n numeri interi 
      somma = somma + num;  // si può scrivere con l'operatore di assegnamento composto +=
                            // somma += num;
      
      # incrementa variabile contatore i
      i = i + 1;            // si può scrivere utilizzando  l'operatore di incremento i++ 
                            // equivalente all'operatore di assegnamento composto i += 1;
    }
  
  # output
  cout << "La somma degli " << n << " numeri e' " << somma;

  return 0;
}

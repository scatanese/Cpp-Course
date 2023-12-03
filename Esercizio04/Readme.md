## Dati due numeri interi determina se un terzo numero è compreso nell'intervallo.

Nell'esercizio 04 viene effettuato il cosiddetto `swap` ovvero lo scambio del valore tra due variabili `a` e `b` utilizzando una terza variabile `c` di appoggio:
```cpp
if (a > b) {
  c = a; a = b; b = c;
}
```
  
Esempio:  `a` = 11, `b`=3
- il valore della variabile `a` viene salvato temporaneamente nella variabile `c`
- alla variabile `a` viene assegnato il valore di `b`
- infine a `b` viene assegnato il valore di `c` che conteneva il valore di `a`

# Cpp-Course
c++ coding for beginners

## Hello World!
- [Esercizio 01](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio01)
## Selezione
- [Esercizio 02](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio02) (Tasse iscrizione)
- [Esercizio 03](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio03) (Massimo di due interi)
## Selezione - numero compreso in un intervallo
- [Esercizio 04](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio04)

Nell'esercizio viene utilizzato il cosiddetto swap ovvero lo scambio del valore tra due variabili (a e b) utilizzando una terza variabile (c) di appoggio:
```cpp
    if (a > b)
    {
        c = a; a = b; b = c;
    }
```
- il valore della variabile a viene salvata temporaneamente nella variabile c
- in **a** viene trasferito il valore di **b**
- infine in **b** quello di **c** che conteneva il valore di **a**
## Iterazione - somma di N numeri
- [Esercizio05](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio05)

Per l'iterazione il programma utilizza un ciclo `while(<condizione>) {<istruzione> | <blocco di istruzioni>}`
```cpp
while (i < n) {
    // istruzioni
    i = i + 1;
}
```
che può essere sostituito con un ciclo `for(<inizializzazione>; <condizione>; <espressione_iterativa>) {<istruzione> | <blocco di istruzioni>}`
```cpp
for (i=0; i<n; i++) {
    // istruzioni
}
```


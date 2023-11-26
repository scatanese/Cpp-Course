# Cpp-Course
c++ coding for beginners

Esercizi per il corso di Informatica III anno ITLC

## Hello World!
- [Esercizio 01](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio01)
## Selezione
- [Esercizio 02](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio02) (Tasse iscrizione)
- [Esercizio 03](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio03) (Massimo di due interi)
## Intervallo
[Esercizio 04](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio04)
Nell'esercizio viene effettuato lo swap (scambio) del valore tra due variabili (a e b), utilizzando una terza variabile (c) cosiddetta di appoggio:
- Il valore della variabile a viene salvata temporaneamente nella variabile c
- in **a** viene trasferito il valore di **b**
- infine in **b** quello di **c** che conteneva il valore di **a**
```cpp
    if (a > b)
    {
        c = a; a = b; b = c;
    }
```

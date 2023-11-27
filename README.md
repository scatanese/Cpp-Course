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
if (a > b) {
        c = a; a = b; b = c;
}
```
- il valore della variabile a viene salvata temporaneamente nella variabile c
- in **a** viene trasferito il valore di **b**
- infine in **b** quello di **c** che conteneva il valore di **a**

![swap1](https://github.com/scatanese/Cpp-Course/assets/3177485/aa31a864-e320-4409-969f-15a8363496a8)
![swap2](https://github.com/scatanese/Cpp-Course/assets/3177485/70ea2171-3807-47b3-b857-96cd729b0c46)
![swap3](https://github.com/scatanese/Cpp-Course/assets/3177485/c8aa34e2-57d5-4c89-87ee-911a0c6b8fea)
![swap4](https://github.com/scatanese/Cpp-Course/assets/3177485/422e81ea-1267-4407-ae88-142ad9f57894)

## Iterazione - somma di N numeri
- [Esercizio05](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio05)

Per l'iterazione il programma utilizza un ciclo `while`
```cpp
while (i < n) {
    // istruzioni
    i = i + 1;
}
```
> [!TIP]
> In questo caso il ciclo while può essere sostituito da un ciclo `for`
```cpp
for (i=0; i<n; i++) {
    // istruzioni
}
```


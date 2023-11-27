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

![swap1](https://github.com/scatanese/Cpp-Course/assets/3177485/54dcd5c2-7350-48d2-8382-9fe3ee2c48e2)
![swap2](https://github.com/scatanese/Cpp-Course/assets/3177485/556afeda-fcc3-4edb-8ae2-1a66c28148b2)
![swap4](https://github.com/scatanese/Cpp-Course/assets/3177485/84a2f1aa-8d24-40d1-99e9-ef9b42964474)
![swap3](https://github.com/scatanese/Cpp-Course/assets/3177485/2e819bee-946e-4e60-a427-41ed0eea8048)


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


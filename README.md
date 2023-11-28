# Cpp-Course
c++ coding for beginners
$$x = {-b \pm \sqrt{b^2-4ac} \over 2a}$$
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
- il valore della variabile `a` viene salvata temporaneamente nella variabile `c`
- in `a` viene trasferito il valore di `b`
- infine in `b` quello di `c` che conteneva il valore di `a`

> ![swap1](https://github.com/scatanese/Cpp-Course/assets/3177485/b6f8bfa7-de9c-4335-8e99-a9497e590e79)
> ![swap2](https://github.com/scatanese/Cpp-Course/assets/3177485/6a16c5af-db26-4615-b567-ef978cdc95de)
> ![swap3](https://github.com/scatanese/Cpp-Course/assets/3177485/69e0a034-47d0-4eea-a741-a9bb267da714)
> ![swap4](https://github.com/scatanese/Cpp-Course/assets/3177485/ead55369-eb5f-416c-9f93-a7aefead1257)

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


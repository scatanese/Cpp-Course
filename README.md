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
- il valore della variabile `a` viene salvata temporaneamente nella variabile `c`
- in `a` viene trasferito il valore di `b`
- infine in `b` quello di `c` che conteneva il valore di `a`

> ![swap1](https://github.com/scatanese/Cpp-Course/assets/3177485/b6f8bfa7-de9c-4335-8e99-a9497e590e79)
> ![swap2](https://github.com/scatanese/Cpp-Course/assets/3177485/6a16c5af-db26-4615-b567-ef978cdc95de)
> ![swap3](https://github.com/scatanese/Cpp-Course/assets/3177485/69e0a034-47d0-4eea-a741-a9bb267da714)
> ![swap4](https://github.com/scatanese/Cpp-Course/assets/3177485/ead55369-eb5f-416c-9f93-a7aefead1257)

- [Esercizio 05](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio05) (tariffa bagaglio aereo)

> [!TIP]
> La formula per aggiungere alla tariffa del biglietto la maggiorazione del 2% per ogni Kg in eccesso al 
perso di 20 Kg del bagaglio è stata ottenuta come segue: 
```cpp
c = t + ((t*0.02f) * (p - 20));
```
dove t è la tariffa, p il peso e c il costo complessivo del biglietto.

L'espressione a destra dell'assegnazione può essere modificata, dopo qualche passaggio, come segue:
> $t+0.02t*(p-20)$
> $= t+ 0.02tp-0.4t$
> $=t(1+0.02p-0.4)$
> $=t(0.6-0.02p)$
Potremo scrivere quindi:
```cpp
c = t*(0.6f - 0.02f*p));
```

## Iterazione - somma di N numeri
- [Esercizio06](https://github.com/scatanese/Cpp-Course/tree/main/Esercizio06)

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


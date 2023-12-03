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

![swap1](https://github.com/scatanese/Cpp-Course/assets/3177485/b6f8bfa7-de9c-4335-8e99-a9497e590e79)
![swap2](https://github.com/scatanese/Cpp-Course/assets/3177485/6a16c5af-db26-4615-b567-ef978cdc95de)
![swap3](https://github.com/scatanese/Cpp-Course/assets/3177485/69e0a034-47d0-4eea-a741-a9bb267da714)
![swap4](https://github.com/scatanese/Cpp-Course/assets/3177485/ead55369-eb5f-416c-9f93-a7aefead1257)

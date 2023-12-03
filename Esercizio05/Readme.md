## Tariffa bagaglio aereo

La formula per aggiungere alla tariffa del biglietto la maggiorazione del 2% per ogni Kg del bagaglio
eccedente il peso di 20 Kg è stata ottenuta come segue: 
```cpp
c = t + ((t*0.02f) * (p - 20f));
```
dove `t` è la tariffa, `p` il peso e `c` il costo complessivo del biglietto.

> :bulb: **Tip:**
> L'espressione di assegnazione può essere modificata attraverso alcuni passaggi algebrici 
> ```cpp
> c = t + (0.02*t * (p-20))
> c = t + (0.02*t*p - 0.4*t)
> c = t * (1 + 0.02*p - 0.4)
> ```
> ottenendo la equivalente:
> ```cpp
> c = t * (0.6 - 0.02*p)
> ```

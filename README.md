# Laboratorio_di_Programmazione_2023_24
 
Classe che carica file di risorse e aggiorna una progress bar (usare design pattern Observer). 
Visualizzazione con QT


Questo progetto illustra l'implementazione del pattern Observer utilizzando il framework Qt in C++. 

## Struttura del progetto

- `barra.h` e `barra.cpp`: Definiscono l'interfaccia e l'implementazione della classe `Observer`, che eredita dalla classe QProgressBar di QT.

- `Subject.h` e `Subject.cpp`: Contengono la definizione e l'implementazione della classe `Subject`,che eredita dalla classe QPushButton di QT, in quanto per aggiornare i subject si utilizza di un evento esterno.

- `main.cpp`: crea una finestra QMainWIndow, degli Observer: `b`, `b1`, `b2` , dei Subject: `s1`, `s2`.
    Al primo subject `s1`, assegno due observer `b` e `b1`. Ogni volta che il pulsante viene premuto attiva il metodo s1->carica(int) dalla lambda function di QT e aumenta un contatore che parte da 0. Il valore del contatore viene preso dalla lambda function e modificato al suo interno.
    Il valore del contatore viene passato con s1->carica(++contatore) e questo valore viene preso da NotifyAll che permette di aggiornare tutti gli observer collegati.
    Una volta raggiunto il 100% di caricamento il pulsante s1 viene disabilitato.


    Al secondo subject `s2` assegno l'ultimo observer,`b2`. Questo viene aggiornato in modo uguale al precedente ma il valore passato da s2->carica(int) è calcolato diversamente dal quello del contatore. 
    fastvalue è un int calcolato per arrivare a 100 più velocemnte.
    Anche qui, una volta che fastvalue > 100 il pulsante s1 viene disabilitato.
    



## Build e Esecuzione

```bash
make
make run
```

# Laboratorio_di_Programmazione_2023_24
 
#### Classe che carica file di risorse e aggiorna una progress bar (usare design pattern Observer). 
#### Visualizzazione con QT

## Struttura del progetto

- **src/pulsante.h/cpp**: Implementazione della classe `pulsante` che eredita da `subject` e `QPushButton`.
- **src/barra.h/cpp**: Implementazione della classe `barra` che eredita da `observer` e `QProgressBar`.
- **src/observer.h**: Dichiarazione della classe `observer`.
- **src/subject.h**: Dichiarazione della classe `subject`.
- **src/main.cpp**: Punto di ingresso dell'applicazione con l'interfaccia grafica.
  
- **main.cpp**: Crea una finestra di tipo `QMainWindow` , tre oggetti di tipo `observer` : `b`, `b1` e `b2`, e due oggetti di tipo `subject` : `s1` e `s2`. Ad `s1`, vengono associati due observer: `b` e `b1`. Ogni volta che il pulsante relativo a `s1` viene premuto, viene attivato il metodo `s1->carica(int)` all'interno della lambda function di Qt. Questo metodo incrementa un contatore, il cui valore è prelevato dalla lambda function stessa e modificato internamente. Il valore del contatore viene quindi passato attraverso `s1->carica(++contatore)`, che attiva il metodo `NotifyAll` per aggiornare tutti gli observer collegati. Una volta raggiunto il 100% di caricamento, il pulsante `s1` viene disabilitato.
Ad `s2`, viene invece associato l'observer `b2`. Il processo di aggiornamento è uguale a quello di `s1`, ma il valore passato attraverso `s2->carica(int)` è calcolato diversamente, utilizzando una variabile denominata `fastvalue` per accelerare il raggiungimento del 100%. Quando `fastvalue` supera il valore 100, il pulsante `s2` viene disabilitato.


## Test

i test sono implementati con Google Test:

- **Test percentuale (percentuale):**
  - Verifica che il metodo **`carica`** del subject `pulsante` notifichi correttamente l'observer `barra` con la percentuale specificata.

- **Test notifica osservatori (notifica):**
  - Verifica che il metodo **`notifyAll`** del subject `pulsante` notifichi correttamente l'observer `barra` con la percentuale specificata.

- **Test aggiungi osservatore (aggiungiobs):**
  - Verifica che il metodo **`addObserver`** del soggetto `pulsante` aggiunga correttamente l'observer `barra`.

- **Test update percentuale (updatePercentuale):**
  - Verifica che l'observer `barra` venga aggiornato correttamente con la percentuale specificata.



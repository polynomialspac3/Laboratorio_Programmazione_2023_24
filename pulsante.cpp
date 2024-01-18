#include "pulsante.h"


pulsante::pulsante() : QPushButton(){};


void pulsante::addObserver(observer* o) {
    observers.push_back(o);
}

void pulsante::notifyAll(int percentuale) {
    for (observer* o : observers) {
        o->update(percentuale);
    }
}

void pulsante::carica(int i) {
    notifyAll(i);
}

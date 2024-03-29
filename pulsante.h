#ifndef PULSANTE_H
#define PULSANTE_H

#include <vector>
#include <unistd.h>
#include <QPushButton>

#include "barra.h"
#include "subject.h"


class pulsante : public subject, public QPushButton  {

private:
    std::vector<observer*> observers;

public:
    pulsante();
    void addObserver(observer* o) override;
    void notifyAll(int percentuale) override;
    void carica(int i); // cambio di stato che l'interfaccia del subject non ha


    //metodi per il testing
    int getSize();
    observer* getObserver(int i);
};




#endif
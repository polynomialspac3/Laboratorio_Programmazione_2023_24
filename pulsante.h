#ifndef PULSANTE_H
#define PULSANTE_H

#include <vector>
#include <unistd.h>
#include <QPushButton>

#include "barra.h"
#include "subject.h"


class pulsante : public subject, public QPushButton  {
    
private:
    int percentuale;
    std::vector<observer*> observers;

public:
    pulsante();
    void addObserver(observer* o) override;
    void notifyAll(int percentuale) override;
    void carica(int i); // cambio di stato del subject
};




#endif
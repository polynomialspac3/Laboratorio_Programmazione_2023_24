#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <unistd.h>
#include <QPushButton>

#include "barra.h"


class Subject : public QPushButton  {
    
private:
    int percentuale;
    std::vector<barra*> observers;

public:
    Subject();
    void addObserver(barra* observer);
    void notifyAll(int percentuale);

    void carica(int i);
};




#endif
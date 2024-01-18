#ifndef BARRA_H
#define BARRA_H

#include <unistd.h>
#include <iostream>
#include <QProgressBar>


class barra : public QProgressBar {
public:
    barra();
    void update(int percentuale);  
};


#endif

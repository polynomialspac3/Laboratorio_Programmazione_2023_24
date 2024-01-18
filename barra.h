#ifndef BARRA_H
#define BARRA_H

#include <QProgressBar>
#include "observer.h"


class barra : public observer, public QProgressBar {
public:
    barra();
    virtual void update(int percentuale) override;
};

#endif

#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"

class subject {
public:
    virtual void addObserver(observer* observer) = 0;
    virtual void notifyAll(int percentuale) = 0;
};




#endif

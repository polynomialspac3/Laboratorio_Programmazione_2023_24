#include "barra.h"

barra::barra() : QProgressBar() {
    setRange(0, 100);
    setValue(0);
}

void barra::update(int percentuale) {
    this->percentuale = percentuale;
    setValue(percentuale);
}

int barra::getPerc() {
    return percentuale;
}


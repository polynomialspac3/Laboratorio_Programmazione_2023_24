
#include "lib/googletest/googletest/include/gtest/gtest.h"
#include "../pulsante.h"
#include "../barra.h"

// Classe concreta per il test dell'observer (usiamo la classe reale)
class ConcreteObserver : public observer {
public:
    int percentualeAggiornata;

    ConcreteObserver() : percentualeAggiornata(-1) {}

    void update(int percentuale) override {
        percentualeAggiornata = percentuale;
    }
};

// Test per verificare che il pulsante notifichi correttamente gli osservatori
TEST(PulsanteTest, NotificaOsservatori) {
// Creiamo un oggetto pulsante e un oggetto observer
pulsante myPulsante;
ConcreteObserver myObserver;

// Aggiungiamo l'observer al pulsante
myPulsante.addObserver(&myObserver);

// Carichiamo il pulsante
myPulsante.carica(50);

// Verifichiamo che l'observer sia stato notificato correttamente
ASSERT_EQ(myObserver.percentualeAggiornata, 50);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

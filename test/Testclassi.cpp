
#include <qt/QtWidgets/QApplication>
#include "gtest/gtest.h"
#include "../pulsante.h"


class pulsantetest : public ::testing::Test{
public:
    pulsante *p;
    barra *b;
    pulsantetest(){
        p = new pulsante();
        b = new barra();

    }
};



TEST_F(pulsantetest, percentuale){

    p->addObserver(b);
    p->carica(42);

    ASSERT_EQ(42, b->getPerc());
};


TEST_F(pulsantetest, notifica) {
    p->addObserver(b);
    p->notifyAll(42);

    ASSERT_EQ(42, b->getPerc());
}

TEST_F(pulsantetest, aggiungiobs){

    ASSERT_EQ(0, p->getSize());

    p->addObserver(b);

    ASSERT_EQ(1, p->getSize());
    ASSERT_EQ(b, p->getObserver(0));

};

TEST_F(pulsantetest, updatePercentuale){

    b->update(42);
    ASSERT_EQ(42, b->getPerc());
};

int main(int argc, char **argv, char *argv2[]) {
    ::testing::InitGoogleTest(&argc, argv);

    QApplication a(argc, argv2);

    return RUN_ALL_TESTS();
}

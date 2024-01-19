
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



TEST(PulsanteTest, NotificaOsservatori) {


}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

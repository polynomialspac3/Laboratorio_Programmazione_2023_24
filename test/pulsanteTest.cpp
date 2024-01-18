
#include "lib/googletest/googletest/include/gtest/gtest.h"
#include "../pulsante.h"


class pulsanteTest : public ::testing::Test{
public:
    std::vector<std::shared_ptr<observer>> observers;
    pulsante *p = new pulsante();
    barra *o = new barra();

};

TEST_F(pulsanteTest, prova){


}
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Data.h"


class ControleRelatorio {
public:
    void selecionarRelatorio(int relatorio);

    void emitirRelatorio(Data dtInicial, Data dtFinal);

};

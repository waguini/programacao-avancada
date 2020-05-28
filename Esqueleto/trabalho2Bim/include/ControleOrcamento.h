#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Orcamento.h"
#include "Data.h"


class ControleOrcamento {
public:
    Orcamento* consultarOrcamento(Data* dtInicial, Data* dtFinal);

    void exibirOrcamento(Orcamento* orcamentos);

};

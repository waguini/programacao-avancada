#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Despesa.h"
#include "Orcamento.h"
#include "Data.h"



class ControleDespesas {
public:
    void adicionarDespesa(Despesa despesa);

    Orcamento ConsultarDespesas(Data* dtInicial, Data* dtFinal);

    void exibirDespesas();

    void importarDespesas(Despesa* despesa);

    void exportarDespesas();

    void validarDespesa(Despesa despesa);

    void alterarDespesa(Despesa desepesa);

    void excluirDespesa(Despesa despesa);

};




#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Categoria.h"
#include "Orcamento.h"
#include "Data.h"
#include "Despesa.h"

class InterfaceSGDB {
public:
    InterfaceSGDB();

    virtual void adicionarCategoria(Categoria* categoria)=0;

    virtual Orcamento consultarOrcamento(Data* dtInicial, Data* dtFinal)=0;

    virtual void salvarCategoria(Categoria* categoria)=0;

    virtual void selecionarRelatorio(int relatorio)=0;

    virtual void montarRelatorio(Data dtInicial, Data dtFinal)=0;

    virtual void emitirRelatorio(Data dtInicial, Data dtFinal)=0;

    virtual void exportarDespesas(Data dtInicial, Data dtFinal)=0;

    virtual void importarDespesas(Despesa* despesas)=0;

    virtual void adicionarDespesa(Despesa despesa)=0;

    virtual void excluirDespesa(Despesa despesa)=0;

    virtual void consultarDespesa(Data dtInicial, Data dtFinal)=0;

    virtual void alterarDespesa()=0;

};

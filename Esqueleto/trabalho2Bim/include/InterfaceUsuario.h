#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Orcamento.h"
#include "Data.h"
#include "Categoria.h"
#include "Despesa.h"


class InterfaceUsuario {
public:
    InterfaceUsuario();

    virtual void exibirTelaInicial()=0;

    virtual void exibirGerenciarCategorias()=0;

    virtual void exibirOrcamento(Orcamento* orcamentos)=0;

    virtual Orcamento* consultarOrcamento(Data* dtInicial, Data* dtFinal)=0;

    virtual void adicionarCategoria()=0;

    virtual void setNome(string nome)=0;

    virtual void salvarCategoria(Categoria* categoria)=0;

    virtual void exibirRelatorios()=0;

    virtual void imprimirRelatorio()=0;

    virtual void selecionarRelatorio(int relatorio)=0;

    virtual void emitirRelatorio(Data dtInicial, Data dtFinal)=0;

    virtual void importarDespesas()=0;

    virtual void exportarDespesas()=0;

    virtual void ConsultarDespesas()=0;

    virtual void RetornarDespesas()=0;

    virtual void adicionarDespesa(Despesa despesa)=0;

    virtual void excluirDespesa(Despesa despesa)=0;

    virtual void alterarDespesa(Despesa despesa)=0;

};


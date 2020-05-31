#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <vector>
#include "Categoria.h"
#include <CategoriaDAO.h>

using namespace std;
class ControleCategoria {
private:
    vector<Categoria> listaCategorias;
    CategoriaDAO categoriaDAO;

public:
    void adicionarCategoria(string nome);

    void carregarCategorias();

    void listarCategorias();

    void SetNome(string nome);

    void salvarCategoria(Categoria* categoria);

};

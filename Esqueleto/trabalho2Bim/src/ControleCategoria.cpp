#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "ControleCategoria.h"
#include <CategoriaDAO.h>



void ControleCategoria::adicionarCategoria(string categoria) {

    categoriaDAO.adicionarCategoria(categoria);

}
void ControleCategoria::carregarCategorias() {


    categoriaDAO.carregarCategorias();

}

void ControleCategoria::listarCategorias() {

    categoriaDAO.listarCategorias();
}

void ControleCategoria::SetNome(string nome) {
}

void ControleCategoria::salvarCategoria(Categoria* categoria) {
}


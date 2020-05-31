#ifndef CATEGORIADAO_H
#define CATEGORIADAO_H


#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

#include <vector>
#include <Categoria.h>

using namespace std;
class CategoriaDAO
{
    public:
        CategoriaDAO();

        void carregarCategorias();

        void adicionarCategoria(string categoria);

        void listarCategorias();


        virtual ~CategoriaDAO();

    protected:

    private:

        vector<Categoria> listaCategorias;
};

#endif // CATEGORIADAO_H

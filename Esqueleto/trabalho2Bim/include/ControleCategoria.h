#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Categoria.h"

using namespace std;
class ControleCategoria {
public:
    void adicionarCategoria();

    void SetNome(string nome);

    void salvarCategoria(Categoria* categoria);

};

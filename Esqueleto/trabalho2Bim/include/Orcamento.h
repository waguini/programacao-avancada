#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Data.h"
#include "Hora.h"
#include "Categoria.h"

using namespace std;
class Orcamento {
private:
    string _descricao;

    double _valor;


public:
    Orcamento();

    Data getData();

    Hora getHora();

    string getDescricao();

    Categoria getCategoria();

    double getValor();

    void setData(Data data);

    void setHora(Hora hora);

    void setDescricao(string descricao);

    void setCategoria(Categoria categoria);

    void setValor(double valor);

    ~Orcamento();

};

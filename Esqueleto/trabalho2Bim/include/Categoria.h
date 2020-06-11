#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <string>


using namespace std;
class Categoria {
private:
    string _nome;


public:
    Categoria();
    Categoria(string nome);

    string getNome() const;

    void setNome(string nome);

};
#endif // CATEGORIA_H


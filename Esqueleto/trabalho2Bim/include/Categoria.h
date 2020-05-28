#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <string>

class Categoria {
private:
    std::string _nome;


public:
    Categoria();

    std::string getNome();

    void setNome(std::string nome);

};
#endif // CATEGORIA_H


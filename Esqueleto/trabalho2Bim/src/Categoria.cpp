#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Categoria.h"

using namespace std;
Categoria::Categoria(){
}



Categoria::Categoria(string nome) : _nome(nome){
}

string Categoria::getNome() const {
    return _nome;
}

void Categoria::setNome(string nome) {
}


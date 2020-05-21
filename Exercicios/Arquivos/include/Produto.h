#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
#include <iostream>

using namespace std;
class Produto
{
    public:
        Produto();
        Produto(string nome,double preco, int qtd) : _nome(nome), _preco(preco), _qtd(qtd){
        }
        virtual ~Produto();

        string Get_nome() { return _nome; }
        void Set_nome(string val) { _nome = val; }
        double Get_preco() { return _preco; }
        void Set_preco(double val) { _preco = val; }
        int Get_qtd() { return _qtd; }
        void Set_qtd(int val) { _qtd = val; }

    protected:

    private:
        string _nome;
        double _preco;
        int _qtd;
};

#endif // PRODUTO_H

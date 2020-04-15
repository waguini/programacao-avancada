#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using namespace std;
class Cliente
{
    public:
        Cliente(string nome) : _nome(nome) {

        }
        Cliente(){}

        virtual ~Cliente(){
        }

        string getNome() const { return _nome; }
        void setnome(string val) { _nome = val; }

    protected:

    private:
        string _nome;
};

#endif // CLIENTE_H

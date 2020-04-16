#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include "Cliente.h"
using namespace std;
class Conta
{
    public:
        Conta(int numero, Cliente cli) : _numero(numero), _cliente(cli) , _saldo(0) {
            cout << "++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "Conta numero: " << this->Getnumero() << endl;
            cout << "Cliente: " << cli.getNome() << endl;

    //ctor
}
Conta(){}
        virtual ~Conta(){
        }

        virtual void extrato() = 0;
        virtual void aplicaJurosDiarios(int dias) = 0;

        int   Getnumero() const { return _numero; }
        void Setnumero(int numero) { _numero = numero; }
        int  Getsaldo() const{ return _saldo / 100; }
        void Setsaldo(int saldo) { _saldo = saldo *100; }

        void setCliente(Cliente cliente){
        _cliente = cliente;
        }

        Cliente getCliente(){
        return _cliente;
        }

        void despositar(double valor){
        _saldo += int(valor*100);

        cout << "Deposito de R$ " << valor << " Realizado." << endl;
        }

        void transferir(Conta &conta, double valor){
        this->retirar(valor);
        conta.despositar(valor);
        cout << "=====================================" << endl;
        cout << "Tranferindo R$" << valor << endl;
        //cout << "De:" << this->getCliente()->getNome() << endl;
        cout << "Para:" << conta.getCliente().getNome() << endl;
        cout << "=====================================" << endl;


        }
        void retirar(double valor){
            if(_saldo >= valor*100){
                _saldo -= int(valor*100);
            }else{
            cout << "Saldo Insuficiente!" << endl;
            }

        }

    protected:
        int _numero;
        int _saldo;
        Cliente _cliente;

    private:
};

#endif // CONTA_H

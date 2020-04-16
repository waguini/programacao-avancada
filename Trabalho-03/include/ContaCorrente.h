#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <Conta.h>
#include <Cliente.h>
#include <iostream>
using namespace std;
class ContaCorrente : public Conta
{
    public:
        ContaCorrente(int numero,Cliente cli) : Conta(numero,cli){

            cout << "Conta Corrente Criada!" << endl;
            cout << "++++++++++++++++++++++++++++++++++++++" << endl;
        }
        ContaCorrente(): Conta(){}
         virtual ~ContaCorrente(){
         }

        void extrato(){
        cout << "O saldo da sua conta corrente eh : " << this->Getsaldo() << endl;
        }

        void aplicaJurosDiarios(int dias){
        Conta::_saldo += _saldo * 0.01;
        }

    protected:

    private:
};

#endif // CONTACORRENTE_H

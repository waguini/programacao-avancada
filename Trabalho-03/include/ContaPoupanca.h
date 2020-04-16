#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include <Conta.h>


class ContaPoupanca : public Conta
{
    public:
        ContaPoupanca(int numero,Cliente cli) : Conta(numero,cli){

            cout << "Conta Poupanca Criada!" << endl;
            cout << "++++++++++++++++++++++++++++++++++++++" << endl;
        };
        virtual ~ContaPoupanca();

        void aplicaJurosDiarios(int dias){
        Conta::_saldo += _saldo * 0.08;
        }

        void extrato(){
        cout << "O saldo da sua conta poupanca eh : " << this->Getsaldo() << endl;
        }

    protected:

    private:
};

#endif // CONTAPOUPANCA_H

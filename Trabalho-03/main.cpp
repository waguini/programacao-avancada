#include <iostream>
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
using namespace std;

int main(){

Cliente cli("Mr. Fantastic");
ContaCorrente c1(1,cli);

Cliente cli2("Mr. Bond");
ContaCorrente c2(2,cli2);

Cliente cli3("Voh Lourdes");
ContaPoupanca c3(3,cli3);

Cliente cli4("Voh Matilda");
ContaPoupanca c4(4,cli4);


c1.extrato();

c1.despositar(1000.00);

c2.despositar(2000);

c2.retirar(1000);

c2.aplicaJurosDiarios(100);

c4.despositar(1000);

c4.aplicaJurosDiarios(100);



c1.extrato();

c1.transferir(c3,500);

c3.aplicaJurosDiarios(100);
c3.extrato();


c2.extrato();
c4.extrato();

/* a principio nao deu pra criar porque nao tinha um construtor nulo na ContaCorrente,
 aih depois nao tinha no Conta e tambem nao Tinha no Cliente*/
ContaCorrente vetorContaCorrente[100];
    return 0;
}

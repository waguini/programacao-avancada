#include <iostream>
#include <VetorInt.h>

#include <Data.h>

int main(){

    VetorInt v1(2);
    VetorInt v2(2);

    v1._vetor[0] = 2;
    v1._vetor[1] = 2;

    v2._vetor[0] = 3;
    v2._vetor[1] = 3;

    VetorInt v3(2);
    //soma dois vetores
    v3 = v1 + v2;
    v3.imprime();
    //multiplica por um escalar real
    v3 = v1 * 3.2;
    v3.imprime();

   //multiplica um pelo outro
    v3 = v1 * v2;
    v3.imprime();

    //soma dois vetores e armazena no primeiro
    v1 += v2;
    v1.imprime();
    //subtrai dois vetores e armazena no primeiro
    v1 -= v2;
    v1.imprime();

    // multiplica um vetor por escalar e armazena no primeiro

    v1 *= 9;
    v1.imprime();
    // compara se os dois vetores são iguais
    if(v1==v2){
        cout << "são iguais!" << endl;
    }

    if (v1!=v2 ) {
        cout << "são diferentes!" << endl;
    }
    //acessar indice
    cout << v1(0) << endl;
//acessar indice
    cout << v2[1] << endl;
    //====================================================



    // data

    Data d1(30,07,1990);

     d1.imprime();
Data* datas[1000];
int j =1;
for(int i=0;i<29;i++){

    datas[i] = new Data(j,02,2020);
     j++;
}

for(int i=0;i<29;i++){

    datas[i]->imprime();

}



    return 0;
}

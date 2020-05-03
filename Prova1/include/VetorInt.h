#ifndef VETORINT_H
#define VETORINT_H

#include <iostream>
#include <Imprimivel.h>

using namespace std;
class VetorInt : public Imprimivel
{
    public:

        int *_vetor;
        int _tamanho;

        VetorInt(int tam){
            if(tam > 0){
            _tamanho = tam;
            _vetor = new int[tam];
            }
            else{
                cout << "Digite um valor inteiro maior do que 0!" << endl;
            }

        };
        virtual ~VetorInt();

VetorInt operator+(const VetorInt &outro) {

        VetorInt v3(_tamanho);

        for(int i=0;i<_tamanho;i++){
            v3._vetor[i] = _vetor[i] + outro._vetor[i];
        }
    return v3;
    }

 VetorInt operator-(const VetorInt &outro) {

        VetorInt v3(_tamanho);

        for(int i=0;i<_tamanho;i++){
            v3._vetor[i] = _vetor[i] - outro._vetor[i];
        }
    return v3;
    }
 VetorInt operator*(const VetorInt &outro) {

        VetorInt v3(_tamanho);

        for(int i=0;i<_tamanho;i++){
            v3._vetor[i] = _vetor[i] * outro._vetor[i];
        }
    return v3;
    }
    /*Multiplica vetor por um escalar*/
 VetorInt operator*(const float num) {
    VetorInt v2(_tamanho);
        for(int i=0;i<_tamanho;i++){
           v2._vetor[i] =  _vetor[i] * num;
        }
    return v2;
    }

   void operator+=(const VetorInt &outro) {

        for(int i=0;i<_tamanho;i++){
           _vetor[i] = _vetor[i] + outro._vetor[i];
        }

    }
   void operator-=(const VetorInt &outro) {

        for(int i=0;i<_tamanho;i++){
           _vetor[i] = _vetor[i] + outro._vetor[i];
        }

    }
//
 void operator*=(const int num) {
    VetorInt v2(_tamanho);
        for(int i=0;i<_tamanho;i++){
           _vetor[i] =  _vetor[i] * num;
        }

    }
 bool operator==(const VetorInt &outro) {

        for(int i=0;i<_tamanho;i++){
           if(_vetor[i] != outro._vetor[i]){
            return false;
           }
        }
    return true;
    }
 bool operator!=(const VetorInt &outro) {

        for(int i=0;i<_tamanho;i++){
           if(!(_vetor[i] ==  _vetor[i])){
            return true;
           }
        }
    return false;
    }


int operator[](int i) {
        if(i>=0 && i <_tamanho){
            return _vetor[i];
        }

        return -999;
    }
    int operator()(int i) {
        if(i>=0 && i <_tamanho){
            return _vetor[i];
        }

        return -999;
    }
void imprime() {
    for(int i=0;i<_tamanho;i++){
         cout << "["<< _vetor[i] << "]";
    }
cout << endl;
}

    protected:

    private:



};

#endif // VETORINT_H

#ifndef DATA_H
#define DATA_H

#include <VetorInt.h>
#include <iostream>
#include <iomanip>

class Data : public VetorInt
{
    public:

        Data(int dia,int mes,int ano): VetorInt(3){

        _vetor[0] = dia;
        _vetor[1] = mes;
        _vetor[2] = ano;
        }
        virtual ~Data();

    int operator[](int i) {
        if(i>=0 && i <3){
            return _vetor[i];
        }

        return -999;
    }
    int operator()(int i) {
        if(i>=0 && i <3 ){
            return _vetor[i];
        }

        return -999;
    }

        void imprime(){
        	cout<< setfill('0') << setw(2)<< _vetor[0] << "/" ;
            cout << setfill('0') << setw(2)<< _vetor[1] << "/";
            cout << setfill('0') << setw(4)<< _vetor[2] << endl;
        }



    protected:

    private:
};

#endif // DATA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*Exerc�cio: Escrever um programa que leia o arquivo de produtos (nome, pre�o, quantidade),
 calcule o total gasto em cada produto (pre�o * quantidade),
 ordene por ordem alfab�tica e salve em outro arquivo a lista ordenada.*/
int main()
{
    /*
    --------------------
     LER DADOS DO ARQUIVO
     --------------------

     1. Abre o arquivo para leitura
          - param1: nome do arquivo
          - param2: modo de abertura do arquivo
              ios_base::in   - leitura (default)
               */

    ifstream fin("produtos");

    // 2. Le os dados do arquivo
   // char buffer[256] = {0};

    string nome;
    double preco = 0.0;
    int quantidade;

    while (!fin.eof()) {
        //fin.getline(buffer, 256);
        fin >> nome >> preco >> quantidade ;

        //cout << "enter: " << enter << endl;
        //cout <<"Buffer inteiro: " << buffer << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout <<"quantidade: " <<  quantidade << endl;
        cout << "=================================" << endl;
        //system("pause");
    }

    // 3. Fecha o arquivo
    fin.close();

    return 0;
}

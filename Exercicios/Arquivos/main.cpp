#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <Produto.h>
using namespace std;
/*Exercício: Escrever um programa que leia o arquivo de produtos (nome, preço, quantidade),
 calcule o total gasto em cada produto (preço * quantidade),
 ordene por ordem alfabética e salve em outro arquivo a lista ordenada.*/


int main() {
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
    vector<Produto> listaDeProdutos;
    while (!fin.eof()) {

        fin >> nome >> preco >> quantidade ;
        listaDeProdutos.push_back(Produto(nome,preco,quantidade));

        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout <<"quantidade: " <<  quantidade << endl;
        cout << "=================================" << endl;
        //system("pause");
    }

    // 3. Fecha o arquivo
    fin.close();
    cout << "***************************************" << endl;
    cout << "Printando agora da lista de produtos" << endl;
    for(int i = 0 ; i < listaDeProdutos.size(); i++) {
        cout << "Nome: " << listaDeProdutos[i].Get_nome() << endl;
        cout << "Preco: " << listaDeProdutos[i].Get_preco() << endl;
        cout <<"quantidade: " <<  listaDeProdutos[i].Get_qtd()<< endl;
        cout << "=================================" << endl;
    }
    cout << "***************************************" << endl;



        cout << "***************************************" << endl;
       // sort(listaDeProdutos.begin(),listaDeProdutos.end());
    cout << "vetor ordenado agora: " << endl;
    for(int i = 0 ; i < listaDeProdutos.size(); i++) {
        cout << "Nome: " << listaDeProdutos[i].Get_nome() << endl;
        cout << "Preco: " << listaDeProdutos[i].Get_preco() << endl;
        cout <<"quantidade: " <<  listaDeProdutos[i].Get_qtd()<< endl;
        cout << "=================================" << endl;
    }
    cout << "***************************************" << endl;
    return 0;
}

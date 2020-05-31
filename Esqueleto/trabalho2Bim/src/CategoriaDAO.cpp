#include "CategoriaDAO.h"

#define ARQUIVO "Categoria.txt"
CategoriaDAO::CategoriaDAO() {
    //ctor
}

void CategoriaDAO::carregarCategorias() {
    ifstream fin(ARQUIVO);
    string nome;

    while (!fin.eof()) {

        fin >> nome;
        listaCategorias.push_back(Categoria(nome));
    }
    fin.close();

}

void CategoriaDAO::adicionarCategoria(string categoria) {
    // abre arquivo  e escreve na ultima linha
    ofstream fout(ARQUIVO,ios::app);
    if (fout.is_open()) {
        fout << categoria << "\n";
        fout.close();
    } else
        cout << "Unable to open file";



}

void CategoriaDAO::listarCategorias() {
    cout << "***************************************" << endl;
    cout << "Printando agora da lista de Categorias" << endl;
    if(listaCategorias.size() >0) {
        cout << "o Tamanho da lista de categorias eh :" << listaCategorias.size() << endl;
    } else {
        cout << "a da lista ta vazia..." << endl;
    }

    for(int i = 0 ; i < listaCategorias.size(); i++) {
        cout << "Nome: " << listaCategorias[i].getNome()<< endl;

    }
}


CategoriaDAO::~CategoriaDAO() {
    //dtor
}

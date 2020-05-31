#include <iostream>
#include <InterfaceUsuario.h>
#include <ControleCategoria.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

   ControleCategoria controleCategoria;

   controleCategoria.adicionarCategoria("Categoria");

   controleCategoria.carregarCategorias();

   controleCategoria.listarCategorias();





    return 0;
}

#include <iostream>
#include <InterfaceUsuario.h>
#include <ControleCategoria.h>
using namespace std;

int main()
{

   ControleCategoria controleCategoria;

   controleCategoria.adicionarCategoria("Lazer");
   controleCategoria.adicionarCategoria("Casa");
   controleCategoria.adicionarCategoria("Contas");
   controleCategoria.adicionarCategoria("Bares");
   controleCategoria.adicionarCategoria("Restaurantes");
   controleCategoria.adicionarCategoria("coco");
   controleCategoria.carregarCategorias();

   controleCategoria.listarCategorias();

   controleCategoria.salvarCategorias();





    return 0;
}

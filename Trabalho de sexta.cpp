#include <stdio.h>
#include <stdlib.h>

void cadastrarCliente() {

FILE *arquivo;

arquivo = fopen("clientes.txt", "a");

if (arquivo == NULL) {
printf("Erro ao abrir arquivo!\n");
return;
}

char nome[100];

printf("\nNome do cliente: ");
scanf(" %[^\n]", nome);

fprintf(arquivo,"%s\n",nome);

fclose(arquivo);

printf("Cliente cadastrado com sucesso!\n");

}

void listarClientes(){

FILE *arquivo;

arquivo = fopen("clientes.txt","r");

if(arquivo == NULL){
printf("\nNenhum cliente encontrado.\n");
return;
}

char nome[100];

printf("\n=== CLIENTES ===\n");

while(fgets(nome,100,arquivo)!=NULL){

printf("%s",nome);

}

fclose(arquivo);

}

void registrarPedido(){

FILE *arquivo;

arquivo = fopen("pedidos.txt","a");

if(arquivo==NULL){

printf("Erro ao abrir arquivo!\n");

return;

}

char cliente[100];
char pedido[100];

printf("\nNome do cliente: ");
scanf(" %[^\n]",cliente);

printf("Pedido: ");
scanf(" %[^\n]",pedido);

fprintf(
arquivo,
"Cliente: %s | Pedido: %s\n",
cliente,
pedido
);

fclose(arquivo);

printf("Pedido registrado!\n");

}

void listarPedidos(){

FILE *arquivo;

arquivo=fopen("pedidos.txt","r");

if(arquivo==NULL){

printf("\nNenhum pedido encontrado.\n");

return;

}

char linha[200];

printf("\n=== PEDIDOS ===\n");

while(fgets(linha,200,arquivo)!=NULL){

printf("%s",linha);

}

fclose(arquivo);

}
void limparDados(){

FILE *clientes;
FILE *pedidos;

clientes = fopen("clientes.txt","w");
pedidos = fopen("pedidos.txt","w");

fclose(clientes);
fclose(pedidos);

printf("\nDados apagados!\n");

}

int main(){

int opcao;

do{

printf("\n");
printf("====== SISTEMA ======\n");

printf("1 - Cadastrar Cliente\n");

printf("2 - Listar Clientes\n");

printf("3 - Registrar Pedido\n");

printf("4 - Listar Pedidos\n");

printf("5 - Apagar Dados\n");

printf("0 - Sair\n");

printf("\nEscolha: ");

scanf("%d",&opcao);

switch(opcao){

case 1:
cadastrarCliente();
break;

case 2:
listarClientes();
break;

case 3:
registrarPedido();
break;

case 4:
listarPedidos();
break;

case 5:
limparDados();
break;

case 0:
printf("\nEncerrando...\n");
break;

default:
printf("\nOpcao invalida!\n");

}

}while(opcao!=0);

return 0;

}